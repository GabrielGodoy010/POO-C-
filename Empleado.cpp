#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona{
	//atributos
	private : int c_codigo;
	string c_puesto;
	//constructor
	public :
	Empleado(){
	}				
	 Empleado(string nom,string ape,string dir,string f,int tel,int cod,string puest) : Persona(nom,ape,dir,f,tel){	
		c_codigo = cod;
		c_puesto = puest;
	}
    void agregar(){
		cout<<"______________________"<<endl;
		cout<<c_codigo<<","<<c_puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fn<<","<<telefono<<endl;
}
		//Set (modificar los atributos de una clase)
	void setCodigo(int cod){c_codigo = cod;}
	void setPuesto(string puest){c_puesto = puest;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFn(string f){fn = f;}
	void setTelefono(int tel){telefono = tel;}
	//get (modificar los atributos de una clase)
	int getCodigo(){	return c_codigo;}
	string getPuesto(){	return c_puesto;}
    string getNombres(){	return nombres;}
    string getApellidos(){	return apellidos;}
    string getDireccion(){	return direccion;}
    string getFn(){	return fn;}
    int getTelefono(){	return telefono;}
};
