#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H
#include <iostream>

using namespace std;

class Movimiento{
	private:
		int ataque_fila;
		int ataque_col;
	public:
		Movimiento();
		Movimiento(int,int);
		~Movimiento();
		int getAtaqueFila();
		void setAtaqueFila(int);
		int getAtaqueColumna();
		void setAtaqueFila(int);
		void Imprimir();
};

#endif