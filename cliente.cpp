#include "persona.cpp"
#include <iostream>
using namespace std; 
class Cliente : Persona{
	//atributos
	private : string nit;
	
	//constructor
	public :
		cliente (){
		}
		
		Cliente(string nom, string ape, string dir, int tel, string n) : Persona(nom,ape,dir,tel){
		nit = n;
		}
		//metodos
		// set (sirve para modificar)
		void setNit(string n){nit = n;}
		void setNombres(string nom){nombres = nom;}
		void setApellids(string ape){apellidos = ape;}
		void setDireccion(string dir){direccion = dir;}
		void setTelefono(int tel){telefono = tel;}
		// get (sirve para mostrar)
		string getNit(){return nit;}
		string getNombres() {return nombres;}
		string getApellidos(){return apellidos;}
		string getDireccion(){return direccion;}
		int getTelefono(){return telefono;}
		
		// metodos
		void mostrar(){
			cout<<"_________"<<endl;
			cout<<nit<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<telefono<<endl;
		}
	
};
