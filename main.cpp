#include "Cliente.cpp"
#include <iostream>

using namespace std;

main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingrese nit"<<endl;
	cin>>nit;
	cout<<"Ingrese nombres "<<endl;
	cin>>nombres;
	cout<<"Ingrese Apellidos "<<endl;
	cin>>apellidos;
	cout<<"Ingrese direccion"<<endl;
	cin>>direccion;
	cout<<"Ingrese telefono"<<endl;
	cin>>telefono;
	
	// Instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos, direccion,telefono,nit);
	obj.mostrar();
	
	cout<<"Ingrese nit"<<endl;
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();
}
