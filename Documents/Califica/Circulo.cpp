#include "Circulo.h"

void Circulo::setRadio(double pRadio){
  radio=pRadio;
}

double Circulo::getRadio(){
  return radio;
}

double Circulo::area(){
  return PI*radio*radio;
}

double Circulo::perimetro(){
  return 2*PI*radio;
}

Circulo::~Circulo(){
  cout << "Destructor de Circulo" << endl;
}
