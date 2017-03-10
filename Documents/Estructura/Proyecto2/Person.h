#ifndef PERSON_H
#define PERSON_H
#include "Object.h"


class Person : public Object
{
protected:
	string name;
public:
	Person(string);
	virtual string toString() const;
	virtual bool Equals(Object*) const;
	//~Person();
};

#endif