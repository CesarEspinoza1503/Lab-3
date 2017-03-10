#ifndef NODE_H
#define NODE_H

#include "Object.h"

class Node
{
	Object* data;
	Node* next;
	Node* prev;
public:
	Node();
	Node(Object*);
	Node* getNext();
	Node* getPrev();
	Object* getData();
	void setNext(Node*);
	void setPrev(Node*);
	void setData(Object*);

	~Node();
	
};

#endif