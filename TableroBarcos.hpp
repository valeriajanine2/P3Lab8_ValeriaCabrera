#ifndef TABLEROBARCOS_H
#define TABLEROBARCOS_H
#include <iostream>
#include "Movimiento.hpp"
#include "Tablero.hpp"

using namespace std;

class TableroBarcos : public Tablero {
	public:
		TableroBarcos();
		~TableroBarcos();
		void Imprimir();
		bool AtaqueExitoso(Movimiento);
};

#endif