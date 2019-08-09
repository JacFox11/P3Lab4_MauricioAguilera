#include <iostream>
#include <string>
#include "mejora.cpp"
#ifndef Oreo_CPP
#define Oreo_CPP
using namespace std;
class Oreo: public Mejora{
	public:
		Oreo():Mejora(2){
		}
		
		int Bono(){
			return multi;
		}
		
		~Oreo(){
		}
};

#endif
