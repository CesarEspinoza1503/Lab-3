 #include "ADTList.h"


//Constructor padre de todas las listas
//Settea el size
ADTList::ADTList(){
	SIZE = 0;
}

ADTList::~ADTList(){ }

int ADTList::size(){
	return SIZE;
}