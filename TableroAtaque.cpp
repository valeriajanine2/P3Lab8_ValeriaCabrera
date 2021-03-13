#include "TableroAtaque.hpp"

TableroAtaque::TableroAtaque():Tablero(){
	//constructo vacio
}

TableroAtaque::~TableroAtaque(){
	
}

bool TableroAtaque::ValidarMovimiento(Movimiento m){
	return true;
}

void TableroAtaque::Imprimir(){
	for(int i = 0; i < 10; i++){
		vector<char> temp;
		temp = this->celdas.at(i);
		for(int j = 0; j < 10; j++){
			cout<<temp.at(i)<<" ";
		}
		cout<<endl;
	}
}