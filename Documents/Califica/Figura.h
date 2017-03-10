#ifndef FIGURA_H
#define  FIGURA_H
using namespace std;
#include <iostream>
class Figura{
private:


public:
  //area
  virtual double area()=0;
  //perimetro
  virtual double perimetro()=0;
  virtual ~Figura();
  double operator+(Figura&);
  operator double();
};

#endif
