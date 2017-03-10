#include "Person.h"

Person::Person(string name, int age) : name(name), age(age){
}

string Person::toString() const {
	stringstream ss;
	ss << "Name " << name << " Age " << age;
	return ss.str();
}

//Metodo para verificar si dos Personas son iguales
bool Person::Equals(Object* other) const{
	Person* temp = dynamic_cast<Person*>(other);
	if (temp == NULL)
	{
		return false;
	}
	Person* p = dynamic_cast<Person*>(other);
	return p -> name == name;
}