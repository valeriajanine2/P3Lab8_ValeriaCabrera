#ifndef JUGADORHUMANO_H
#define JUGADORHUMANO_H
#include <iostream>
#include <string>
#include "Jugador.hpp"
#include "Movimiento.hpp"
#include"TableroAtaque.hpp"
#include"TableroBarcos.hpp"

using namespace std;

class JugadorHumano:public Jugador {
	public:
		JugadorHumano();
		JugadorHumano(string nombre);
		~JugadorHumano();
		virtual Movimiento Jugar(TableroAtaque*);
		virtual void ColocarBarcos(TableroBarcos*);
};

#endif