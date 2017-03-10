#include "VSArrayList.h"

/*
	Este constructor le asigna una capacidad al arreglo
	junto con un valor de cambio.
*/
VSArrayList::VSArrayList(int current_capacity){
	this->current_capacity = current_capacity;
	array = new Object*[current_capacity];
	delta = 3;
}


//Liberacion de memoria
VSArrayList::~VSArrayList(){
	for (int i = 0; i < size(); ++i){
		delete array[i];
	}
	delete[] array;
}

/*
	Agrega un Objeto a la lista.
	SI la lista llego a su capacidad,
	este manda a llamar a un  metodo que
	incrementa la capacidad de la lista.
	Corre los elementos de la lista.
*/
bool VSArrayList::insert(Object* e, int p){
	if (p < 0 || p > size())
	{
		return false;
	}
	if (SIZE == current_capacity)
	{
		resize();
	}	
	for (int i = SIZE; i > p; --i)
	{
		array[i] = array[i-1];
	}
	array[p] = e;
	SIZE++;
	return true;
}

//Incremente tamaño de la lista, creando una nueva lista
//con los mismos datos que la original.
void VSArrayList::resize(){
	Object** temp = NULL;
	temp = new Object*[current_capacity + delta];
	//validar memoria
	for (int i = 0; i < current_capacity; ++i)
	{
		temp[i] = array[i];
	}
	delete[] array;
	array = temp;
	current_capacity += delta;
}

//Limpia la lista
void VSArrayList::clear(){
	for (int i = 0; i < size(); ++i)
	{
		delete array[i];
		array[i] = NULL;
	}
	SIZE=0;
}

/*
	Elimina un dato de la lista
*/
Object* VSArrayList::remove(int p){
	if (p < 0 || p > size())
	{
		return NULL;
	}
	if (isEmpty())
	{
		return NULL;
	}
	Object* temp = array[p];
	for (int i = p; i < size(); ++i)
	{
		array[i] = array[i+1];
	}
	SIZE--;
	return temp;
}

Object* VSArrayList::first() const{
	return array[0];
}

Object* VSArrayList::last() const{
	return array[SIZE-1];
}

//Retorna la posicion del objeto pedido
int VSArrayList::indexOf(Object* e) const{
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

//Retorna el Objeto de la lista en la posicion enviada
Object* VSArrayList::get(int p){
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

int VSArrayList::Capacity() const{
	return -1;
}

bool VSArrayList::isEmpty() const{
	if (SIZE == 0)
	{
		return true;
	}
	return false;
}

bool VSArrayList::isFull() const{
	if (SIZE == current_capacity)
	{
		return true;
	}
	return false;
}