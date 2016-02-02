#ifndef LINEACODIGO_H
#define LINEACODIGO_H

#include <string>
#include <cstring>
#include <queue>
#include <sstream>

using namespace std;

class LineaCodigo {
	public:		
		LineaCodigo (string linea, int numLinea) {
			_linea = linea;
			size_t pos = 0, lastPos = 0;
			while ((pos = linea.find_first_of(" \n\t", lastPos)) != string::npos) {
				tokens.push(linea.substr(lastPos, pos-lastPos));
				lastPos = pos+1;
			}
			tokens.push(linea.substr(lastPos));
			_numLinea = numLinea;
		}
		bool hayTokens () {
			return !tokens.empty();
		}
		string obtenerToken () {			
			return tokens.front();
		}
		void sacarToken () {
			tokens.pop();
		}
		int numeroLinea () {
			return _numLinea;
		}
		
	private:
		queue<string> tokens;
		string _linea;
		int _numLinea;
};

#endif
