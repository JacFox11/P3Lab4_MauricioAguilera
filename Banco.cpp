#include <iostream>
#include <string>
#include "Edificio.cpp"
#ifndef Banco_CPP
#define Banco_CPP
using namespace std;
class Banco: public Edificio{
	public:
		Banco(): Edificio(15){
		}
		
		int Caracteristica(){
			galletas+=1;
			return 0;
		}
		
		~Banco(){
		}
};

#endif
