#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
#include <vector>

using namespace std;

class Tablero{
	private:
		vector<vector<char>> celdas;
	public:
		Tablero();
		Tablero(vector<vector<char>>);
		~Tablero();
		vector<vector<char>> getCeldas();
		void setCeldas(vector<vector<char>>);
		void Imprimir();
};

#endif