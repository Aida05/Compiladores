#include <iostream>
#include <fstream>
#include <string>
#include <queue>
#include <cctype>

#include "AnalizadorLexico.h"
#include "LineaCodigo.h"

using namespace std;

int leerArchivo (string nombreArchivo, queue<LineaCodigo>& linea);

int main (int argc, char const* argv[])
{
	queue<LineaCodigo> lineasCodigo;
	LineaCodigo *linea; 
	string nombreArchivo;
	string token;
	
	cout << "Nombre del archivo: ";
	getline(cin, nombreArchivo);
	if (leerArchivo(nombreArchivo, lineasCodigo) >= 0) {
		while (!lineasCodigo.empty()) {
			cout << "\nLinea: "<<lineasCodigo.front().numeroLinea()<<endl;
			while (lineasCodigo.front().hayTokens()) {
				token = lineasCodigo.front().obtenerToken();
				if (esPalabraReservada(token)) {				
					cout << token << " = Palabra Reservada" << endl;
				}
				else {
					int p = evaluar(token.c_str());
					if (p < 0) {
						cout << token << " = caracter '" << token[-p-1] << "' inesperado en posicion " << -p << endl;
					}
					else {
						cout << token << " = " << estados[p] << endl;
					}
				}
				lineasCodigo.front().sacarToken();
			}
			lineasCodigo.pop();
		}
	}
	
	return 0;
}

int leerArchivo(string nombreArchivo, queue<LineaCodigo>& lineasCodigo) {
	fstream archivoEjemplo;
	string cadEntrada;
	LineaCodigo* nuevaLinea = 0;
	int numLinea = 1;

	archivoEjemplo.open(nombreArchivo.c_str(), ios::in);
	if (archivoEjemplo.is_open()) {
		getline(archivoEjemplo, cadEntrada);
		while (!archivoEjemplo.eof()){
			nuevaLinea = new LineaCodigo(cadEntrada, numLinea++);
			lineasCodigo.push(*nuevaLinea);
			delete nuevaLinea;
			getline(archivoEjemplo, cadEntrada);			
		}
		archivoEjemplo.close();
	}
	else {
		cout << "No se pudo abrir el archivo." << endl;
		return -1;
	}

	return 0;
}
