#include <iostream>
#include <string>
#ifndef Edificio_CPP
#define Edificio_CPP
using namespace std;
class Edificio{
	protected:
		int galletas;
		int c;
	public:
		Edificio(){
		}
		
		Edificio(int galletas, int c){
			this->galletas=galletas;
			this->c=c;
		}
		
		int Producir(){
			return galletas;
		}
		
		void setGalletas(int galletas){
			this->galletas=galletas;
		}
		
		virtual int Caracteristica()=0;
		
		~Edificio(){
		}
};

#endif
