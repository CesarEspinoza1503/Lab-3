#ifndef CIRCULO_H
#define  CIRCULO_H
#include "Figura.h"
using namespace std;

class Circulo : public Figura {
private:
  double radio;
  const double PI = 3.1416;
public:
  void setRadio(double);
  double getRadio();
  ~Circulo ();
  virtual double area();
  virtual double perimetro();
  //circumferencia
};

#endif
