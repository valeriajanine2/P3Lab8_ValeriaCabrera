#include "Tablero.hpp"

Tablero::Tablero(){
	//constructor vacio
}

Tablero::~Tablero(){
	
}

vector<vector<char>> Tablero::getCeldas(){
	return this->celdas;
}

void Tablero::setCeldas(vector<vector<char>> celdas){
	this->celdas=celdas;
}