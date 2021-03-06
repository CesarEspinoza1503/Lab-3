#ifndef ADTLIST_H
#define ADTLIST_H
#include "Object.h"

class ADTList : public Object
{
protected:
	int SIZE;
public:
	ADTList();
	virtual ~ADTList();
	int size();
	virtual bool insert(Object*, int) = 0;
	virtual Object* remove(int) = 0;
	virtual Object* first() const = 0;
	virtual Object* last() const = 0;
	virtual void clear() = 0;
	virtual int indexOf(Object*) const = 0;
	virtual Object* get(int) = 0;
	virtual int Capacity() const = 0;
	virtual bool isEmpty() const = 0;
	virtual bool isFull() const = 0;
};


#endif