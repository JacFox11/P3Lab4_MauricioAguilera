#include <iostream>
#include <string>
#include "mejora.cpp"
#ifndef Migajas_CPP
#define Migajas_CPP
using namespace std;
class Migajas: public Mejora{
	public:
		Migajas():Mejora(3){
		}
		
		int Bono(){
			return multi;
		}
		
		~Migajas(){
		}
};

#endif
