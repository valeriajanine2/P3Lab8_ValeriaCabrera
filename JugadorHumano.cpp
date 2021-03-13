#include "JugadorHumano.hpp"

JugadorHumano::JugadorHumano(){
	//Constructor Vacio
}

JugadorHumano::JugadorHumano(string nombre):Jugador(nombre){

}

void JugadorHumano::ColocarBarcos(TableroBarcos* tablerosBarcos){
	
	int xA,yA,hv1,cont=5;
	cout<<"Ingrese la coordenada del aircraft x: ";
	cin>>xA;
	cout<<"y: ";
	cin>>yA;
	cout<<"Ingrese 1 si desea colorcarlo horizontal o ingrese 0 si desea colocarlo vertical: ";
	cin>>hv1;
	//aircraft
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(cont>0){
				tablerosBarcos->celdas[xA][j] = 'A';
				cont--;
			}
		}
	}
	
	for(int i = 0; i < 10; i++){
		vector<char> temp;
		temp = tablerosBarcos->getCeldas().at(i);
		for(int j = 0; j < 10; j++){
			cout<<temp.at(i)<<" ";
		}
		cout<<endl;
	}
}

Movimiento JugadorHumano::Jugar(TableroAtaque* tablerosAtaque){
	return Movimiento(1,2);
}