#include<iostream>
#include "Persona.cpp"

using namespace std;

class cliente:Persona {
	//atributo
	private: string nit;
	
	//constuctor
	public:
		cliente(){
			
		}
		
		cliente(string nom, string ape, string dir, int tel,string n): Persona(nom,ape,dir,tel){
			nit = n;
		}
		
	//metodos
	//set modificar
	void setNit(string n){nit=n;}
	void setNombres(string nom){nombres=nom;}
	void setApellidos(string ape){apellidos=ape;}
	void setDireccion(string dir){direccion=dir;}
	void setTelefono(int tel){telefono=tel;}
	
	
	//get mostrar
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
		
	//metodos	
		
	void mostrar (){
		cout<<"___________"<<endl;
		cout<<nit<<";"<<nombres<<";"<<apellidos<<";"<<direccion<<";"<<telefono<<endl;
	}
};

