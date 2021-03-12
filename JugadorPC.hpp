#ifndef JUGADORPC_H
#define JUGADORPC_H
#include <iostream>
#include <string>
#include "TableroAtaque.hpp"
#include "TableroBarcos.hpp"

using namespace std;

class JugadorPC{
	public:
		JugadorPC();
		~Jugador();
		string getNombre();
		void setNombre(string);
		virtual void MovimientoJugar(TableroAtaque*);
		virtual void ColocarBarcos(TableroBarcos*);
};

#endif