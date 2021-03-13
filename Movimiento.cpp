#include "Movimiento.hpp"

Movimiento::Movimiento(){
	//constructo vacio
}

Movimiento::Movimiento(int ataque_fila,int ataque_col){
	this->ataque_col=ataque_col;
	this->ataque_fila=ataque_fila;
}

Movimiento::~Movimiento(){
	
}

int Movimiento::getAtaqueColumna(){
	return this->ataque_col;
}

void Movimiento::setAtaqueColumna(int ataque_col){
	this->ataque_col=ataque_col;
}

int Movimiento::getAtaqueFila(){
	return this->ataque_fila;
}

void Movimiento::setAtaqueFila(int ataque_fila){
	this->ataque_fila=ataque_fila;
}

void Movimiento::Imprimir(){
	cout<<"Movimiento: x:"<<ataque_fila<<" y:"<<ataque_col<<endl;
}