#include <iostream>
#include <string>
#ifndef Edificio_CPP
#define Edificio_CPP
using namespace std;
class Edificio{
	protected:
		int galletas;
	public:
		Edificio(){
		}
		
		Edificio(int galletas){
			this->galletas=galletas;
		}
		
		int Producir(){
			return galletas;
		}
		
		void setGalletas(int galletas){
			this->galletas=galletas;
		}
		
		int Caracteristica();
		
		~Edificio(){
		}
};

#endif
