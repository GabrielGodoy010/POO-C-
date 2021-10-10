#include "Cliente.cpp"
#include <iostream>
using namespace std;
main (){
	string c_nit,c_nombres,c_apellidos,c_direccion,c_fn;
		int c_telefono;
			cout<<"Ingrese Nit: ";
			cin>>c_nit;
			cout<<"Ingrese Nombres: ";
			cin>>c_nombres;
			cout<<"Ingrese Apellidos: ";
			cin>>c_apellidos;
			cout<<"Ingrese Direccion: ";
			cin>>c_direccion;
			cout<<"Ingrese Telefono: ";
			cin>>c_telefono;
			cout<<"Ingrese Fecha de nacimiento: ";
			cin>>c_fn;
   	 //Instancia De Un Objeto					
		Cliente obj = Cliente(c_nombres,c_apellidos,c_direccion,c_fn,c_telefono,c_nit);
				obj.agregar();
			cout<<"Ingrese Nit: ";
				cin>>c_nit;
				obj.setNit(c_nit);
				obj.agregar();
			cout<<"Nit: "<<obj.getNit()<<endl;
}
