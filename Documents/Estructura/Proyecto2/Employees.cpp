#include "Employees.h"

//Constructor con herencia
Employees::Employees(string job, string name, string salary) : Person (name){
	this->salary = salary;
	this->job = job;
}


string Employees::toString() const {
	stringstream ss;
	ss << job << " " << name << " " << salary;
	return ss.str();
}

string Employees::getSalary() const{
	return salary;
}

void Employees::setSalary(string salary){
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

string Employees::getJob() const{
	return job;
}

void Employees::setJob(string job){
	this->job = job;
}

Employees::~Employees(){

}