#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::iterator;
#include "figura.h"
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "Circulo.h"
#include <typeinfo>
int menu();

vector <figura*> figuras;


int main(int argc, char const *argv[]) {
  int opcion= 0;
  //opcion = menu();
  do {
      opcion = menu();
    switch (opcion) {
      case 1:{
        cout<<" Ingrese el radio del circulo: ";
        double radio;
        cin>>radio;
        Circulo* circulo = new Circulo();
        circulo->setRadio(radio);
        figuras.push_back(circulo);
        //guardar en el vecto
        break;
        }

        case 2:{
        //std::cout << "Entramos aqui" << std::endl;
            Rectangulo* rectangulo = new Rectangulo();
            double lectura;
            std::cout << "Ingrse la medida de la base: " << std::endl;
            std::cin >> lectura;
            rectangulo->setBase(lectura);
            std::cout << "Ingrese la medida de la base: " << std::endl;
            std::cin >> lectura;
            rectangulo->setAltura(lectura);
            figuras.push_back(rectangulo);
        break;
        }

        case 3:{
          Cuadrado* cuadrado = new Cuadrado();
          double lectura;
          std::cout << "Ingrse la medida de una arista: " << std::endl;
          std::cin >> lectura;
          cuadrado->setLado(lectura);
          figuras.push_back(cuadrado);
          break;
        }

        case 4:{
          double area = 0;
          vector<figura*>::iterator d = figuras.begin();

          for(; d != figuras.end();++d){
               area+= **d;
           }
           std::cout << "La suma de las áreas es: " << area << endl;
           break;
        }
}
    } while(opcion !=5);

    for (int i = 0; i < figuras.size(); i++) {
        delete figuras[i];
    }

  return 0;
}


int menu(){
  cout<<"   MENU    "<<endl;
  cout<<"1. Crear Circulo"<<endl;
  cout<<"2. Crear Rectangulo"<<endl;
  cout<<"3. Crear Cuadrado"<<endl;
  cout<<"4. Sumar areas"<<endl;
  cout<<"5. Salir"<<endl;
  cout<<"Ingrese una opcion: ";
  int opcion;
  cin>>opcion;
  return opcion;
}
