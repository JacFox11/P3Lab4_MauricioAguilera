#include <iostream>
#include <string>
#include "Edificio.cpp"
#ifndef Templo_CPP
#define Templo_CPP
using namespace std;
class Templo: public Edificio{
	public:
		Templo(): Edificio(15){
		}
		
		int Caracteristica(){
			galletas+=3;
			return 0;
		}
		
		~Templo(){
		}
};

#endif
