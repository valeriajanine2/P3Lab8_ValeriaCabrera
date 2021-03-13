#include <iostream>
#include <vector>
#include <string>
#include "Movimiento.hpp"
#include "Tablero.hpp"
#include "TableroAtaque.hpp"
#include "TableroBarcos.hpp"
#include "Jugador.hpp"
#include "JugadorPC.hpp"
#include "JugadorHumano.hpp"
#include "Juego.hpp"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	JugadorHumano* h = new JugadorHumano();
	TableroBarcos* tablero = new TableroBarcos();
	
	vector<vector<char>> original;
	int inicio=3,inicio2=4;
	for(int i = 0; i < 10; i++){
		vector<char> col;
		for(int j = 0; j < 10; j++){
			col.push_back('+');
		}
		original.push_back(col);
	}
	
	tablero->setCeldas(original);
	
	h->ColocarBarcos(tablero);
	/*int resp=1;
	
	while(resp!=0){
		
		Juego* game = new Juego();
		game->PrepararJuego();
		game->Jugar();
		
	}//fin del loop de juegos
	
	//llenar
	vector<vector<char>> original;
	int inicio=3,inicio2=4;
	for(int i = 0; i < 10; i++){
		vector<char> col;
		for(int j = 0; j < 10; j++){
			if(inicio==j){
				col.push_back('A');
			}else{
				col.push_back('+');
			}
		}
		original.push_back(col);
	}
	
	//imprimir
	for(int i = 0; i < 10; i++){
		vector<char> temp;
		temp = original.at(i);
		for(int j = 0; j < 10; j++){
			cout<<temp.at(i)<<" ";
		}
		cout<<endl;
	}*/
	
	return 0;
}