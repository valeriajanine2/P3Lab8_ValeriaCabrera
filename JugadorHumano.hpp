#ifndef JUGADORHUMANO_H
#define JUGADORHUMANO_H
#include <iostream>
#include <string>
#include "TableroAtaque.hpp"
#include "TableroBarcos.hpp"

using namespace std;

class JugadorHumano{
	public:
		JugadorHumano();
		~Jugador();
		virtual void MovimientoJugar(TableroAtaque*);
		virtual void ColocarBarcos(TableroBarcos*);
};

#endif