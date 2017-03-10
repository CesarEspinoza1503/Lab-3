#include <iostream>
#include "Object.h"
#include "Person.h"
#include "ADTList.h"
#include "VSArrayList.h"
#include "LList.h"
#include "Employees.h"
using namespace std;

int main(int argc, char const *argv[])
{
	int menu , submenu, posicion;
	int edad, sueldo;
	double inflacion = 0.5;
	string nombre;
	ADTList* lista;
	lista = new VSArrayList(4);
	Employees* temp_empleado; //Variable usada para casteo

	/*---------------------------------------------------
	| Empleados Predefinidos							|
	-----------------------------------------------------*/
	Employees* juan = new Employees("Juan" , 21 , 1000);
	Employees* maria = new Employees("Maria" , 18, 2000);
	Employees* bob = new Employees("Bob" , 32, 9696);
	
	lista->insert(juan,0);
	lista->insert(maria,1);
	lista->insert(bob,1);

	do
	{
		cout << "      Sistema de Empleados\nUtilizando una lista de tamaño variable\n" << "---------------------------------"<<endl;
		cout << "1)Agregar Empleado.\n2)Listar Empleados."
		<<"\n3)Borrar Empleado.\n4)Sacar Promedio de Sueldos."
		<<"\n5)Sacar Sueldos Mayores.\n6)Sacar Sueldos Menores."
		<<"\n7)Ajuste de Inflacion."
		<<"\n8)Salir." 
		<< endl;
		cin >> submenu;
		switch(submenu){
			case 1:{
				//Agregar Empleado

				cout << "Ingrese Nombre, Edad y Sueldo de la Persona."<<endl;
				cin >> nombre;
				cin >> edad;
				cin >> sueldo;
				Employees* nuevo_empleado = new Employees(nombre, edad, sueldo+(sueldo*inflacion));
				cout << "Posicion en que desea agregar al empleado."<<endl;
				if (lista->isEmpty())
				{
					cout << "La lista esta vacia." << endl;
				}
				cin >> posicion;
				if (lista->insert(nuevo_empleado , posicion) == false)
				{
					cout << "Hubo un error al tratar de agregar al empleado."<<endl;
				}/*else{
					lista->insert(nuevo_empleado, posicion);
				}*/
				break;
			}
			case 2:{
				//Se muestra una lista de empleados

				if (lista->size() == 0)
				{
					cout<< "La lista esta vacia"<<endl;
				}
				for (int i = 0; i < lista->size(); ++i)
				{
					cout << lista->get(i)->toString()<<endl;
				}
				break;
			}
			case 3:{
				//Manda a llamar el metodo de borrar y retorna el empleado borrado;
				for (int i = 0; i < lista->size(); ++i)
				{
					cout<< i << ") " << lista->get(i)->toString()<<endl;
				}
				cout <<"Eliga posicion del empleado a eliminar."<<endl;
				cin >> posicion;

				//Un temporal para no perder el empleado eliminado a mostrar
				Object* obj_borrar = lista->remove(posicion);
				if (obj_borrar == NULL)
				{
					cout << "Hubo un error al tratar de remover al empleado."<<endl;
				}else{
					cout << obj_borrar->toString() <<" fue removido con exito."<<endl;
				}
				break;
			}
			case 4:{
				//Se agarra todos los sueldos y se saca su promedio
				int total_sueldos = 0;
				for (int i = 0; i < lista->size(); ++i)
				{
					temp_empleado = dynamic_cast<Employees*>(lista->get(i));
					total_sueldos =+ temp_empleado->getSalary();
				}
				cout << "El sueldo promedio es de: " << total_sueldos/(lista->size()) << " Euros"<<endl;
				break;
			}
			case 5:{
				//Compara Sueldos para determinar los mayores
				temp_empleado = dynamic_cast<Employees*>(lista->get(0));
				int temp = temp_empleado->getSalary();
				for (int i = 1; i < lista->size(); ++i)
				{
					temp_empleado = dynamic_cast<Employees*>(lista->get(i));
					if (temp_empleado->getSalary() > temp || temp_empleado->getSalary() == temp)
					{
						temp = temp_empleado->getSalary();
					}
				}
				cout << "El sueldo mayor es de: " << temp << " Euros"<<endl;
				break;
			}
			case 6:{
				//Compara Sueldos para determinar los menores
				temp_empleado = dynamic_cast<Employees*>(lista->get(0));
				int temp = temp_empleado->getSalary();

				for (int i = 1; i < lista->size(); ++i)
				{
					temp_empleado = dynamic_cast<Employees*>(lista->get(i));
					if (temp_empleado->getSalary() < temp || temp_empleado->getSalary() == temp)
					{
						temp = temp_empleado->getSalary();
					}
				}
				cout << "El sueldo menor es de: " << temp << " Euros"<<endl;
				break;
			}
			case 7:{
				//Asigna un nuevo valor de ajuste y se le agregara ese porcentaje a cada Empleado
				cout << "Establecer valor en porcentaje del ajuste de inflacion."<<endl;
				cin >> inflacion;
				inflacion = inflacion / 100;
				for (int i = 0; i < lista->size(); ++i)
				{
					temp_empleado = dynamic_cast<Employees*>(lista->get(i));
					temp_empleado->setSalary(temp_empleado->getSalary()+(temp_empleado->getSalary()*inflacion));
				}
				break;
			}
		}
	} while (submenu !=8);
	cout << "Cerrando el programa..."<<endl;
	return 0;
}