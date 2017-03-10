#include <iostream>
#include "Figura.h"
#include "Circulo.h"
#include "Cuadrado.h"
using namespace std;
int main(int argc, char const *argv[]) {
  Circulo* c = new Circulo();
  c -> setRadio(10);
  Figura* IZQ = c;

  Cuadrado* s = new Cuadrado();
  s->setLado(15);

  Figura* DER = s;
  std::cout << c->area() << std::endl;
  double total = *IZQ + *DER;
  double area = *IZQ;
  cout<<area<<endl;

  delete c; delete s;
  return 0;
}
