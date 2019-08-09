#include <iostream>
#include <string>
#ifndef Mejora_CPP
#define Mejora_CPP
using namespace std;
class Mejora{
	protected:
		int multi;
	public:
		Mejora(){
		}
		
		Mejora(int multi){
			this->multi;
		}
		
		virtual int Bono()=0;
		
		~Mejora(){
		}
};

#endif
