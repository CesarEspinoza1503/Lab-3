#include "Cuadrado.h"

void Cuadrado::setLado(double lado){
  this->setAltura(lado);
  this->setBase(lado);
}

double Cuadrado::getLado(){
  return this->getBase();
}

Cuadrado::~Cuadrado(){
  cout << "/* Destructor de Cuadrado */" << endl;
}
