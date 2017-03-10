#ifndef RECTANGULO_H
#define  RECTANGULO_H

#include "Figura.h"

class Rectangulo : public Figura{
private:
  double base, altura;
public:
  virtual double area();
  virtual double perimetro();
  double getAltura();
  double getBase();
  void setAltura(double);
  void setBase(double);
  ~Rectangulo ();

};

#endif
