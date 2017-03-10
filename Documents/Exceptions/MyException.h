#pragma once
#include <exception>
#include <iostream>
using namespace std;

class MyException : public exception{
public:
    const char* what(){
            return "¿Porque sos tan pendejo?, ¡no se puede dividir entre cero!";
    }
};

#
