#ifndef JUGADORPC_H
#define JUGADORPC_H
#include <iostream>
#include <string>
#include "Jugador.hpp"
#include "Movimiento.hpp"
#include "TableroAtaque.hpp"
#include "TableroBarcos.hpp"

using namespace std;

class JugadorPC : public Jugador{
	public:
		JugadorPC();
		JugadorPC(string nombre);
		~JugadorPC();
		string getNombre();
		void setNombre(string);
		virtual Movimiento Jugar(TableroAtaque*);
		virtual void ColocarBarcos(TableroBarcos*);
};

#endif