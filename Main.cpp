#include "Cliente.cpp"
#include <iostream>
#include <string.h>


using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"INGRESAR NIT: ";
	cin>>nit;
		cout<<"INGRESAR NOMBRE: ";
	cin>>nombres;
		cout<<"INGRESAR APELLIDOS: ";
	cin>>apellidos;
		cout<<"INGRESAR DIRECCION: ";
	cin>>direccion;
		cout<<"INGRESAR TELEFONO: ";
	cin>>telefono;
	//instancia de un objeto
	cliente obj = cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	
		
	cout<<"INGRESAR NIT: ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();
	
	
}
