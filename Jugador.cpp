#include "Jugador.hpp"

Jugador::Jugador(){
	//constructor vacio
}

Jugador::Jugador(string nombre){
	this->nombre=nombre;
}

Jugador::~Jugador(){
	
}

string Jugador::getNombre(){
	return this->nombre;
}

void Jugador::setNombre(string nombre){
	this->nombre=nombre;
}


