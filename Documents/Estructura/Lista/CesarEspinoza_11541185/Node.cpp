#include "Node.h"

Node::Node(){
	next = NULL;
	prev = NULL;
	data = NULL;
}

Node::Node(Object* data){
	this->data = data;
	next = NULL;
	prev = NULL;
}
//destructor de los nodos
Node::~Node(){
	if (data)
	{
		delete data;
	}
	if (next)
	{
		delete next;
	}
}


Node* Node::getNext(){
	return next;
}

Node* Node::getPrev(){
	return prev;
}

Object* Node::getData(){
	return data;
}

void Node::setData(Object* pData){
	data = pData;
}

void Node::setNext(Node* pNext){
	next = pNext;
}

void Node::setPrev(Node* Pprev){
	prev = Pprev;
}

