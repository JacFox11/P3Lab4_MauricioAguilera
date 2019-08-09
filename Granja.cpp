#include <iostream>
#include <string>
#include "Edificio.cpp"
#ifndef Granja_CPP
#define Granja_CPP
using namespace std;
class Granja: public Edificio{
	public:
		Granja(): Edificio(5,1){
		}
		
		int Caracteristica(){
			if (c==10){
				c=1;
				return 20;
			}
			else{
				setC();
				return 0;
			}
		}
		
		void setC(){
			c++;
		}
		
		~Granja(){
		}
};

#endif
