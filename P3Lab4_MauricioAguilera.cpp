#include <vector>
#include <bits/stdc++.h>
#include <typeinfo>
#include "Oreo.cpp"
#include "Migajas.cpp"
#include "Granja.cpp"
#include "Banco.cpp"
#include "Templo.cpp"

using namespace std;

int main(){
	string nombre;
	int galletas=0;
	vector<Edificio*> edificios;
	vector<Mejora*> mejoras;
	int temp;
	int pg=50, pb=100, pt=200;
	char op='0';
	bool oreo=false, migajas=false;
	cout<<"...:::BIENVENIDO:::..."<<endl;
	cout<<"Ingrese el nombre de su reposteria: ";
	cin>>nombre;
	while (op!='8'){
		system("cls");
		cout<<"Reposteria de "<<nombre<<", tiene "<<galletas<<" galletas."<<endl<<endl;
		cout<<"1. Hacer click"<<endl<<
		"2. Comprar Granja ("<<pg<<" galletas)"<<endl<<
		"3. Comprar Banco ("<<pb<<" galletas)"<<endl<<
		"4. Comprar Templo ("<<pt<<" galletas)"<<endl<<
		"5. Mostrar edificios y mejoras compradas"<<endl;
		if (oreo==false){
			cout<<"6. Comprar Oreo (100 galletas)"<<endl;
		}else{
			cout<<"6. Comprar Oreo (Compradas)"<<endl;
		}
		if (migajas==false){
			cout<<"7. Comprar Migajas (1000 galletas)"<<endl;
		}else{
			cout<<"7. Comprar Migajas (Compradas)"<<endl;
		}
		cout<<"Ingrese una opcion: ";
		cin>>op;
		switch (op){
			case '1':{
				int temp=0;
				temp+=1;
				for (int i=0; i<edificios.size() ; i++){
					temp=temp+edificios.at(i)->Caracteristica(); 
					temp=temp+edificios.at(i)->Producir();
				}
				for (int i=0; i<mejoras.size(); i++){
					temp=temp*mejoras.at(i)->Bono(); 
				}
				galletas=galletas+temp;
				break;
			}
			case '2':{
				if (galletas>=pg){
					system("cls");
					edificios.push_back(new Granja()); 
					cout<<"Granja exitosamente agregada"<<endl;
					galletas=galletas-pg;
					pg=pg+15;
					system("pause");
				}
				else{
					system("cls");
					cout<<"No hay suficientes galletas para comprar este edificio, tenga una galleta de consolidacion :)"<<endl;
					galletas=galletas+1;
					system("pause");
				}
				break;
			}
			case '3':{
				if (galletas>=pb){
					system("cls");
					edificios.push_back(new Banco()); 
					cout<<"Banco exitosamente agregada"<<endl;
					galletas=galletas-pb;
					pb=pb+40;
					system("pause");
				}
				else{
					system("cls");
					cout<<"No hay suficientes galletas para comprar este edificio, tenga una galleta de consolidacion :)"<<endl;
					galletas=galletas+1;
					system("pause");
				}
				break;
			}
			case '4':{
				if (galletas>=pt){
					system("cls");
					edificios.push_back(new Templo()); 
					cout<<"Banco exitosamente agregada"<<endl;
					galletas=galletas-pt;
					pt=pt+100;
					system("pause");
				}
				else{
					system("cls");
					cout<<"No hay suficientes galletas para comprar este edificio, tenga una galleta de consolidacion :)"<<endl;
					galletas=galletas+1;
					system("pause");
				}
				break;
			}
			case '5':{
				int temp=0, temp2=0, temp3=0;
				for (int i=0; i<edificios.size() ;i++){
					if (typeid(*edificios.at(i))== typeid(Granja)){
						temp++;
					}
					if (typeid(*edificios.at(i))== typeid(Banco)){
						temp2++;
					}
					if (typeid(*edificios.at(i))== typeid(Templo)){
						temp3++;
					}
				}
				cout<<"...:::INVENTARIO:::..."<<endl;
				cout<<"Granjas: "<<temp<<endl;
				cout<<"Bancos: "<<temp2<<endl;
				cout<<"Templos: "<<temp3<<endl<<endl;
				cout<<"Mejoras:"<<endl;
				if (oreo==true){
					cout<<"Oreo"<<endl;
				}
				if (migajas==true){
					cout<<"Migajas"<<endl;
				}
				if (oreo==false&& migajas==false){
					cout<<"Ninguna"<<endl;
				}
				system("pause");
				break;
			}
			case '6':{
				if (galletas>=100){
					system("cls");
					if (oreo==false){
						oreo=true;
						galletas=galletas-100;
						mejoras.push_back(new Oreo());
						cout<<"Oreos desbloqueadas, con el poder de galletas de buena calidad tu produccion se ha duplicado."<<endl;
						system("pause");  
					}
					else{
						cout<<"Al tratar de desbloquear nuevamente las oreos notas de que tu reposteria es amenzada por derechos de autor asi que decides parar antes de arrepentirte."<<endl;
						system("pause");
					}
				}else{
					if (oreo==true){
						cout<<"Al tratar de desbloquear nuevamente las oreos notas de que tu reposteria es amenzada por derechos de autor asi que decides parar antes de arrepentirte."<<endl;
					}else{
						cout<<"Lamentablemente no tienes suficientes galletas para conseguir oreos, esto te entristeze y decides comerte una de tus galletas"<<endl;
						if (galletas!=0){
							galletas--;
							system("pause");
						}else{
							cout<<"Notas que no tienes ninguna y te entristezes mas"<<endl;
							system("pause");
						}
					}
				}
				break;
			}
			case '7':{
				if (galletas>=1000){
					system("cls");
					if (migajas==false){
						migajas=true;
						galletas=galletas-1000;
						mejoras.push_back(new Migajas());
						cout<<"Migajas desbloqueadas, notas que al triturar las galletas podras aumentar tus ganancias, gracias a esto tu produccion se ha triplicado"<<endl;
						system("pause");  
					}
					else{
						cout<<"Piensas que pasaria si crearias migajas de las migajas pero a este punto te das cuenta de que no seria mas que polvo de galletas y nadie aprecia eso."<<endl;
						system("pause");
					}
				}else{
					if (migajas==true){
						cout<<"Piensas que pasaria si crearias migajas de las migajas pero a este punto te das cuenta de que no seria mas que polvo de galletas y nadie aprecia eso."<<endl;
					}else{
						cout<<"Al tratar de crear migajas con una de tus galletas, fallas miserablemente y deduces que tomara unas 100 galletas para perfeccionar la tecnica"<<endl;
						if (galletas!=0){
							galletas--;
							system("pause");
						}else{
							cout<<"Notas que no tienes ninguna galleta y lo que habias hecho migajas era una roca con forma de galleta y ahora te duele la mano y estas triste"<<endl;
							system("pause");
						}
					}
				}
				break;
			}
			default:{
				system("cls");
				cout<<"La opcion no es valida, pero si intentaba encontrar un easter egg como en el cookie clicker original pues done un 10/10 en este ejercicio y lo pondre en mente ;)"<<endl;
				system("pause");
				break;
			}
		}
	}
	
	system("pause");
	return 0;
}
