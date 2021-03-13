#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
#include <string>
#include "TableroAtaque.hpp"
#include "TableroBarcos.hpp"
#include "JugadorHumano.hpp"
#include "JugadorPC.hpp"
#include "Jugador.hpp"

using namespace std;

class Juego{
	private:
		TableroBarcos** tablerosBarcos;
		TableroAtaque** tablerosAtaque;
		Jugador** jugadores;
	public:
		Juego();
		Juego(TableroBarcos**,TableroAtaque**,Jugador**);
		~Juego();
		void PrepararJuego();
		void Jugar();
};

#endif