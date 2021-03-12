#ifndef TABLEROBARCOS_H
#define TABLEROBARCOS_H
#include <iostream>
#include "Movimiento.hpp"

using namespace std;

class TableroBarcos{
	public:
		TableroBarcos();
		~TableroBarcos();
		void Imprimir();
		bool AtaqueExitoso(Movimiento);
};

#endif