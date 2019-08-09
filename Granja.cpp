#include <iostream>
#include <string>
#include "Edificio.cpp"
#ifndef Granja_CPP
#define Granja_CPP
using namespace std;
class Granja: public Edificio{
	protected:
		int c;
	public:
		Granja(): Edificio(5){
		}
		
		void setC(){
			c++;
		}
		
		int Caracteristica(){
			if (c==10){
				return 20;
			}
		}
		
		~Granja(){
		}
};

#endif
