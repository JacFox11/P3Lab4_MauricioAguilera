#include <iostream>
#include <string>
#include "Edificio.cpp"
#ifndef Templo_CPP
#define Templo_CPP
using namespace std;
class Templo: public Edificio{
	public:
		Templo(): Edificio(30,0){
		}
		
		int Caracteristica(){
			galletas=galletas+3;
			return 0;
		}
		
		~Templo(){
		}
};

#endif
