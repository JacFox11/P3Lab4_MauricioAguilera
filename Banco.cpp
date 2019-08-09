#include <iostream>
#include <string>
#include "Edificio.cpp"
#ifndef Banco_CPP
#define Banco_CPP
using namespace std;
class Banco: public Edificio{
	public:
		Banco(): Edificio(15,0){
		}
		
		int Caracteristica(){
			galletas=galletas+1;
			return 0;
		}
		
		~Banco(){
		}
};

#endif
