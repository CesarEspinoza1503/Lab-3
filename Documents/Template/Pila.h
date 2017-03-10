#ifndef PILA_H
#define PILA_H 

#include <vector>
using namespace std;

template <class T>

class Pila
{
private:
	vector<T> data;

public:
	void push(T);
	T pop();
	T top();
	bool isEmpty();
	//Pila();
	//~Pila();
};



/*template <class T>
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
*/



#endif