#ifndef CUADRADO_H
#define  CUADRADO_H

#include "Rectangulo.h"
class Cuadrado : public Rectangulo{
private:

public:
  void setLado(double);
  double getLado();
  ~Cuadrado();
};


#endif
