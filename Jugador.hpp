#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include <string>
#include "TableroAtaque.hpp"
#include "TableroBarcos.hpp"

using namespace std;

class Jugador{
	protected:
		string nombre;
	public:
		Jugador();
		Jugador(string);
		~Jugador();
		string getNombre();
		void setNombre(string);
		virtual void MovimientoJugar(TableroAtaque*) = 0;
		virtual void ColocarBarcos(TableroBarcos*) = 0;
};

#endif