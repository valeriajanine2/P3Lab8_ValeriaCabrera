#ifndef TABLEROATAQUE_H
#define TABLEROATAQUE_H
#include <iostream>
#include <vector>
#include "Movimiento.hpp"
#include "Tablero.hpp"

using namespace std;

class TableroAtaque : public Tablero {
	public:
		TableroAtaque();
		TableroAtaque(vector<vector<char>> celdas);
		~TableroAtaque();
		void Imprimir();
		bool ValidarMovimiento(Movimiento);
		void AplicarMovimiento(Movimiento);
		bool VerificarVictoria();
};

#endif