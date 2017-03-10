#include <iostream>
#include "Cuadrado.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include <typeinfo>
#include <vector>
using namespace std;

int menu();
/*int main(int argc, char const *argv[]) {
  //Cuadrado c;
  //Circulo ci;
  //ci.setRadio(10);
  //cout<<"Circulo: "<<ci.getArea()<<endl;


    //Figura* figura = new Figura();


    Figura* figura1 = new Cuadrado();
    Figura* figura2 = new Rectangulo();
    //Figura* figura3 = new TrianguloRec();
    Figura* figura4 = new Circulo();

    //figura2->getArea();
    cout<<typeid(figura1).name()<<endl;
    cout<<typeid(*figura1).name()<<endl;
    dynamic_cast<Rectangulo*>(figura2)->setAltura(10);

    Rectangulo* r = dynamic_cast<Rectangulo*>(figura2);

    r->setBase(5);
    cout<<"El area es: "<<figura2->area();
    //figura + figura1;

    //delete figura;
    delete figura1;
    delete figura2;
    //delete figura3;
    delete figura4;

  return 0;
}*/

int main(int argc, char const *argv[]) {
  int opcion=0;
  vector<Figura*> vFiguras;

  do {
    opcion = menu();
    switch (opcion) {
      case 1:{
        cout<<" Ingrese el radio del circulo: ";
        double radio;
        cin>>radio;
        //Instancciar un circulo en un apuntador de Figura
        Figura* circulo = new Circulo();
        //Castear para poder accesar al metodo de la clase circulo
        Circulo* ct = dynamic_cast<Circulo*>(circulo);
        //Si el casteo fue exitoso
        if(ct!=NULL){
          ct->setRadio(radio);
        }

        //TODO:guardar en el vector
        //figuras[]
        //push_back
      break;
    }
      case 2:{
        double altura, base;
        Rectangulo* rectangulo = new Rectangulo();
        cout<<"Ingrese base del rectangulo: ";
        cin>> base;
        cout<<"Ingrese altura del ractangulo: ";
        cin>>altura;
        rectangulo->setBase(base);
        rectangulo->setAltura(altura);
        vFiguras.push_back(rectangulo);
        break;
      }
      case 3:{
        double lado;
        Cuadrado* cuadrado = new Cuadrado();
        cout<<"Ingrese el lado del cuadrado: ";
        cin>>lado;
        cuadrado->setLado(lado);
        vFiguras.push_back(cuadrado);

        break;
      }
      case 4:{
        double area = 0;
        //iterar el vector con iterator
        vector<Figura*>::iterator it = vFiguras.begin();
        for (; it != vFiguras.end(); ++it) {
          /* code */
          area += (*it) ->area();
          cout<<"AREA: "<<area<<endl;
        }
        break;
      }
      default:{}

    }
  } while(opcion !=5);

  //liberar memoria dinamica
  for (int i = 0; i < vFiguras.size(); i++) {
    delete vFiguras[i];
  }
  return 0;

  for(std::vector<Figura*>::iterator it  = vFiguras.begin() ; it != vFiguras.end(); ++it){
    cout<<' ' << *it;
  }
}

int menu(){
  cout<<"   MENU"<<endl;
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
