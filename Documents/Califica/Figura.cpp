#include "Figura.h"
#include <iostream>

/*double Figura::area(){
  return 0;
}
double Figura::perimetro(){
  return 0;
}*/

double Figura::operator+(Figura& der){
  return this->area() + der.area();
}

Figura::operator double(){
  return this->area();
}

Figura::~Figura(){
  cout << "Destructor de Figura" << endl;
}
