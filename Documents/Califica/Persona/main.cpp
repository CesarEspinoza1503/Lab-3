//linked list

#include "Persona.h"
#include "Empleado.h"
#include <iostream>
using std::string;
using std::endl;
using std::cout;
int main(){

  Empleado* empleado=new Empleado();
  Persona* persona =new Persona();
  Persona* persona2 =new Empleado();

  empleado->imprimir();
  persona->imprimir();
  persona2->imprimir();

  /*empleado->setNombre("Juan Perez");

  empleado->setEmail("juanperendin@hotmail.com");

  empleado->setID("080-1145-13340");

  empleado->setPuesto("Barrendero");

  empleado->setSalario(300.50);*/

  cout<<empleado->getNombre()<<endl<<empleado->getID()<<endl
  <<empleado->getPuesto()<<endl;
  delete empleado;
  delete persona;
  delete persona2;
  return 0;

}
