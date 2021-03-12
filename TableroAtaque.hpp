#ifndef TABLEROARAQUE_H
#define TABLEROATAQUE_H
#include <iostream>
#include <vector>
#include "Movimiento.hpp"

using namespace std;

class TableroAtaque{
	public:
		TableroAtaque();
		~TableroAtaque();
		void Imprimir();
		bool ValidarMovimiento(Movimiento);
		void AplicarMovimiento(Movimiento);
		bool VerificarVictoria();
};

#endif