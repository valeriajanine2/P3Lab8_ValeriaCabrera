#include "TableroBarcos.hpp"

TableroBarcos::TableroBarcos():Tablero(){
	//constructor vacio
}


TableroBarcos::~TableroBarcos(){
	
}

void TableroBarcos::Imprimir(){
	
	for(int i = 0; i < 10; i++){
		vector<char> temp;
		temp = this->celdas.at(i);
		for(int j = 0; j < 10; j++){
			cout<<temp.at(i)<<" ";
		}
		cout<<endl;
	}
}