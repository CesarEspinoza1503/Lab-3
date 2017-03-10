#include "Rectangulo.h"

void Rectangulo::setAltura(double pAltura){
  altura=pAltura;
}

void Rectangulo::setBase(double pBase){
base=pBase;
}

double Rectangulo::getAltura(){
  return altura;
}
double Rectangulo::getBase(){
  return base;
}


double Rectangulo::area(){
  return base * altura;
}

double Rectangulo::perimetro(){
  return base * 2 + altura * 2;
}

Rectangulo::~Rectangulo(){
  cout << "Destructor de Rectangulo" << endl;
}
