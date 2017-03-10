#include <iostream>
using namespace std;
#include "Pila.h"

int main(int argc, char const *argv[])
{
	int elemento;
	Pila<int> pilaEnteros;

	for (int i = 0; i < 5; ++i)
	{
		cout<<"Ingrese un elemento a la pila: ";
		cin >> elemento;
		pilaEnteros.push(elemento);
	}

	cout<<endl<<"Los elementos de la pila son: "<<endl;

	while(!pilaEnteros.isEmpty()){
		cout<<pilaEnteros.pop()<<endl;
	}

	return 0;
}