#ifndef FSARRAYLIST_H
#define FSARRAYLIST_H

#include "ADTList.h"
class FSArrayList : public ADTList
{
	Object** array;
	int capacity;
public:
	FSArrayList(int);
	virtual ~FSArrayList();
	virtual bool insert(Object*, int);
	virtual Object* remove(int);
	virtual Object* first() const;
	virtual Object* last() const;
	virtual void clear();
	virtual int indexOf(Object*) const;
	virtual Object* get (int);
	virtual int Capacity() const;
	virtual bool isEmpty() const;
	virtual bool isFull() const;
};

#endif