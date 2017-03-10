#include "Empleado.h"
using std::string;
using std::cout;
using std::endl;

  void Empleado::imprimir(){
    cout<<"Esta es la instancia de un Empleado"<<endl;
  }

Empleado::Empleado(){
  salario=0;
}

void Empleado::setPuesto(string pPuesto){
  this->puesto = pPuesto;
}

string Empleado::getPuesto(){
  return puesto;
}

void Empleado::setSalario(double pSalario){
  this->salario=pSalario;
}

double Empleado::getSalario(){
  return salario;
}
