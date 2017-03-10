#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#include "Person.h"
#include <iostream>

class Employees : public Person
{
	int salary;
public:
	Employees(string , int, int);
	~Employees();
	virtual string toString() const;
	virtual bool Equals(Object*) const;
	int getSalary();
	void setSalary(int);
};



#endif