#include <iostream>
#include <string>
using namespace std;

class Persona{
  private:
    string nombre;
    int altura;
    int peso;
    string hobby;
  public:
    Persona(string,int,int,string);
    void imprimir();
    void setNombre(string);
    void setAltura(int);
    void setPeso(int);
    void setHobby(string);


    ~Persona();
};
