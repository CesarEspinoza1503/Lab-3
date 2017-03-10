#include "Person.h"

Person::Person(string name) : name(name){
}

string Person::toString() const {
	stringstream ss;
	ss << "Name " << name;
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