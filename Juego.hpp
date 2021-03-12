#ifndef JUEDGO_H
#define JUEGO_H
#include <iostream>
#include <string>
#include "TableroAtaque.hpp"
#include "TableroBarcos.hpp"

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