#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
	ifstream archivoEntrada("input/entrada.txt");
	ofstream archivoSalida("output/salida.txt");

	if(archivoEntrada.is_open() && archivoSalida.is_open()){
		cout<<"archivo abierto"<<endl;
		string linea;

		while (getline(archivoEntrada, linea)){
			archivoSalida << linea;
			
		}
		cout<<"archivo copiado correctamente"<<endl;
	}
	
}

