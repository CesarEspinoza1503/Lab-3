#include "Employees.h"

//Constructor con herencia
Employees::Employees(string name, int age, int salary) : Person (name, age){
	this->salary = salary;
}


string Employees::toString() const {
	stringstream ss;
	ss << "Name " << name << " Age " << age << " Salary " << salary;
	return ss.str();
}

int Employees::getSalary(){
	return salary;
}

void Employees::setSalary(int salary){
	this->salary = salary;
}

bool Employees::Equals(Object* other) const{
	Employees* temp = dynamic_cast<Employees*>(other);
	if (temp == NULL)
	{
		return false;
	}
	Employees* p = dynamic_cast<Employees*>(other);
	return p -> name == name;
}

Employees::~Employees(){}