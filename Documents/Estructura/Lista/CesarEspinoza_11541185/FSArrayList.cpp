#include <iostream>
#include "FSArrayList.h"
using namespace std;


FSArrayList::FSArrayList(int capacity){
	this-> capacity = capacity;
	array = new Object*[capacity];
	if (! array)
	{
		cerr << "Out of memory" << endl;
		//exit(1);
	}
}


FSArrayList::~FSArrayList(){
	for (int i = 0; i < size(); ++i){
		delete array[i];
	}
	delete[] array;
}

/*
	Primero valida si la lista esta llena,
	si no esta llena prosigue a insertar el 
	elemento en la posicion dada
*/
bool FSArrayList::insert(Object* e, int p){
	if (p < 0 || p > size())
	{
		return false;
	}
	if (isFull())
	{
		return false;
	}	
	for (int i = SIZE; i > p; --i)
	{
		array[i] = array[i-1];
	}
	array[p] = e;
	SIZE++;
	return true;
}


//Limpia la lista
void FSArrayList::clear(){
	for (int i = 0; i < size(); ++i)
	{
		delete array[i];
	}
	SIZE=0;
}

/*
	Trata de remover un elemento de la lista.
	Retorna NULL si la lista esta vacia.
*/
Object* FSArrayList::remove(int p){
	if (p < 0 || p > size())
	{
		return NULL;
	}
	if (isEmpty())
	{
		return NULL;
	}
	Object* temp = array[p];
	for (int i = p; i < p; ++i)
	{
		array[i] = array[i+1];
	}
	SIZE--;
	return temp;
}

Object* FSArrayList::first() const{
	return array[0];
}

Object* FSArrayList::last() const{
	return array[SIZE-1];
}

//Retorna la posicion del objeto pedido
int FSArrayList::indexOf(Object* e) const{
	if (e == NULL)
	{
		return -1;
	}
	for (int i = 0; i < SIZE; ++i)
	{
		if (e == array[i])
		{
			return i;
		}
	}
	cout<< "No encontrado..." << endl;
	return -1;
}
//Retorna el objeto en la posicion enviada
Object* FSArrayList::get(int p){
	if (p < 0 || p > size())
	{
		return NULL;
	}
	if (isEmpty())
	{
		return NULL;
	}
	return array[p];
}

int FSArrayList::Capacity() const{
	return capacity;
}

bool FSArrayList::isEmpty() const{
	if (SIZE == 0)
	{
		return true;
	}
	return false;
}

bool FSArrayList::isFull() const{
	if (SIZE == capacity)
	{
		return true;
	}
	return false;
}