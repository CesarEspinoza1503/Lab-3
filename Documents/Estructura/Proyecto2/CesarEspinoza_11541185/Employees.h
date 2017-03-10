#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#include "Person.h"
#include <iostream>

class Employees : public Person
{
	string job;
	string salary;
public:
	Employees(string, string , string);
	~Employees();
	virtual string toString() const;
	virtual bool Equals(Object*) const;
	string getSalary() const;
	void setSalary(string);
	string getJob() const;
	void setJob(string);
};



#endif