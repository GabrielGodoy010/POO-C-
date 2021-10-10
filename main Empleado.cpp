#include "Empleado.cpp"
#include <iostream>
#include <cstdlib>
using namespace std;
main(){

				string c_nombres,c_apellidos,c_direccion,c_fn,c_puesto;
					int telefono,c_codigo;
						    cout<<"\n\t---------EMPLEADO---------"<<endl;
					cout<<"Ingrese Codigo: ";
					cin>>c_codigo;
					cout<<"Ingrese Puesto: ";
					cin>>c_puesto;
					cout<<"Ingrese Nombres: ";
					cin>>c_nombres;
					cout<<"Ingrese Apellidos: ";
					cin>>c_apellidos;
					cout<<"Ingrese Direccion: ";
					cin>>c_direccion;
					cout<<"Ingrese Telefono: ";
					cin>>telefono;
					cout<<"Ingrese Fecha de nacimiento: ";
					cin>>c_fn;
				 //Instancia de un objeto
					Empleado obj = Empleado(c_nombres,c_apellidos,c_direccion,c_fn,telefono,c_codigo,c_puesto);
					obj.agregar();
					cout<<"Ingrese Codigo: ";
					cin>>c_codigo;
					obj.setCodigo(c_codigo);
					obj.setPuesto(c_puesto);
					obj.setNombres(c_nombres);
					obj.setApellidos(c_apellidos);
					obj.setDireccion(c_direccion);
					obj.setFn(c_fn);
					obj.setTelefono(telefono);
					obj.agregar();
					cout<<"Codigo: "<<obj.getCodigo()<<endl;
					cout<<"Puesto: "<<obj.getPuesto()<<endl;
					cout<<"Nombres: "<<obj.getNombres()<<endl;
					cout<<"Apellidos: "<<obj.getApellidos()<<endl;
					cout<<"Direccion: "<<obj.getDireccion()<<endl;
					cout<<"Fecha de nacimiento: "<<obj.getFn()<<endl;
					cout<<"Telefono: "<<obj.getTelefono()<<endl;
					system("pause");
					system("cls");
	}
