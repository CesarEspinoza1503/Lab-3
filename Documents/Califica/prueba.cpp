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



int main(int argc, char const *argv[]) {
        Cuadrado* square = new Cuadrado();
        Circulo* circle = new Circulo();
        square->setLado(15);
        circle->setRadio(10);
        figura* izq = square;
        figura* der = circle;

        double a = *izq + *der;
        std::cout <<  a << std::endl;
        double area = *der;
        std::cout << area << std::endl;

        if( izq < der ){
            std::cout << "El cuadrado es mas pequeño" << std::endl;
        }
        if( der > izq ){
            std::cout << "El circulo es más grande" << std::endl;
        }


        delete square, circle;

    return 0;
}
