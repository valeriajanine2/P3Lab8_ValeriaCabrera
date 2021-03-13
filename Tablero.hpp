#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
#include <vector>

using namespace std;

class JugadorHumano;
class JugadorPC;
class Juego;

class Tablero{
	protected:
		vector<vector<char>> celdas;
		friend class JugadorHumano;
		friend class JugadorPC;
		friend class Juego;
	public:
		Tablero();
		~Tablero();
		vector<vector<char>> getCeldas();
		void setCeldas(vector<vector<char>>);
		virtual void Imprimir() = 0;
};

#endif