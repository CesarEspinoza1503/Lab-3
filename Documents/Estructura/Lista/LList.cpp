#include "LList.h"

LList::LList(){
	head=NULL;
}

LList::LList(Object* head){
	head = head;
}

//borra head haciendo que los demas caigan en cascada
LList::~LList(){
	delete head;
}

//Metodo de inserion en una lista
bool LList::insert(Object* e, int p){
	if (p < 0 || p > size())
	{
		return false;
	}
	Node* temp = new Node(e);
	if (SIZE == 0)
	{
		head->setPrev(temp);
		temp->setNext(head);
		head = temp;
	}
	else if(p == SIZE-1){
		Node* temp2 = head;
		for (int i = 1; i < p; ++i)
		{
			temp2 = temp2->getNext();
		}
		temp2->setPrev(temp);
		temp->setNext(temp2);
	}else{
		Node* temp2 = head;
		for (int i = 1; i < p; ++i)
		{
			temp2 = temp->getNext();
		}
		temp->setPrev(temp2);
		temp->setNext(temp2->getNext());
		temp2->getNext()->setPrev(temp);
		temp2->setNext(temp);
	}
	SIZE++;
	return true;
}


//Metodo de eliminacion de nodo
//Para eliminar, desconecta el nodo a borrar
//y conecta su anterior con el siguiente del nodo a borrar
Object* LList::remove(int p){
	if (p < 0 || p > size())
	{
		return NULL;
	}
	Node* temp;
	Object* retval;
	if (p == 0)
	{
		temp = head->getNext();
		temp->setPrev(NULL);
		head->setNext(NULL);
		head->setData(NULL);
		retval = head->getData();
		delete head->getData();
		delete head;

		head = temp;
	}else if(p == SIZE-1){
		temp = head;
		for (int i = 1; i < p; ++i)
		{
			temp = temp->getNext();
		}
		Node* erase = temp->getNext();
		retval = erase->getData();
		temp->setNext(NULL);
		erase->setPrev(NULL);
		delete erase;
	}else{
		temp = head;
		for (int i = 1; i < p; ++i)
		{
			temp = temp->getNext();
		}
		Node* erase = temp->getNext();
		retval = erase->getData();
		temp->setNext(erase->getNext());
		erase->getNext()->setPrev(temp);
		erase->setNext(NULL);
		erase->setPrev(NULL);

		delete erase;
	}
	SIZE--;
	return retval;
}

//limpia la lista
void LList::clear(){
	delete head;
}

//Retorna la data del nodo head
Object* LList::first(){
	return head->getData();
}
//Recorre toda la lista, hasta llegar al ultimo
// Retorna el data del ultimo nodo
Object* LList::last(){
	Node* temp = head;
	for (int i = 0; i < SIZE-1; ++i)
	{
		temp = temp->getNext();
	}
	return temp->getData();
}
//Recorre la lista, evaluando los nodos,
//Si encuentra igualdad retorna la posicion del nodo
int LList::indexOf(Object* e){
	Node* temp = head;
	for (int i = 0; i < SIZE-1; ++i)
	{
		if (e->Equals(temp->getData()))
		{
			return i;
		}
		temp = temp->getNext();
	}
	return -1;
}
//Recorre la lista hasta llegar al nodo deseado y retorna su data
Object* LList::get(int p){
	if (p < 0 || p > SIZE-1)
	{
		return NULL;
	}
	Node* temp = head;
	for (int i = 0; i < p; ++i)
	{
		temp = temp->getNext();
	}
	return temp->getData();
}
//Retorna -1 ya que no tiene limitacion de capacidad
int LList::Capacity() const{
	return -1;
}

//Revisa si esta vacio
bool LList::isEmpty() const{
	if (SIZE==0)
	{
		return true;
	}
	return false;
}
//Revisa si esta lleno
bool LList::isFull() const{
	return false;
}