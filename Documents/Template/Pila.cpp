#include "Pila.h"


template <class T>
void Pila<T>::push(T element){
	data.push_back(element);
}

template <class T>
T Pila<T>::pop(){
	T retval = data.back();
	data.pop_back();
	return retval;
}

template <class T>
T Pila<T>::top(){

	return data.back();
}

template <class T>
bool Pila<T>::isEmpty(){

	return data.empty();
}