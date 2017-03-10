#ifndef PERSON_H
#define PERSON_H
#include "Object.h"


class Person : public Object
{
protected:
	string name;
	int age;
public:
	Person(string, int);
	virtual string toString() const;
	virtual bool Equals(Object*) const;
	//~Person();
};

#endif