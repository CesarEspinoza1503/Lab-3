#include <iostream>
using namespace std;

Class Matriz{
private:
  int size;
public:
  void setSize(int);
  int getSize();
  void Multiplicar(int**,int**);
  void Sumar(int**,int**);
  void Restar(int**,int**);
};
