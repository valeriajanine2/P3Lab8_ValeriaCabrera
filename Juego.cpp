#include "Juego.hpp"

Juego::Juego(){
	tablerosBarcos = new TableroBarcos*[2]; 
	tablerosAtaque = new TableroAtaque*[2];
	tablerosBarcos[0] = new TableroBarcos();
	tablerosBarcos[1] = new TableroBarcos();
	tablerosAtaque[0] = new TableroAtaque();
	tablerosAtaque[1] = new TableroAtaque();
	for(int i = 0; i < 10; i++){
		tablerosBarcos[0]->celdas.push_back(vector<char>());
		tablerosBarcos[1]->celdas.push_back(vector<char>());
		tablerosAtaque[0]->celdas.push_back(vector<char>());
		tablerosAtaque[1]->celdas.push_back(vector<char>());
	}
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			tablerosBarcos[0]->celdas[i].push_back('-');
			tablerosBarcos[1]->celdas[i].push_back('-');
			tablerosAtaque[0]->celdas[i].push_back('-');
			tablerosAtaque[1]->celdas[i].push_back('-');
		}
	}
}

void Juego::PrepararJuego(){
	
}

void Juego::Jugar(){
	
}