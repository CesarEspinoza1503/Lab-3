#include "Object.h"
#include <iostream>

Object::Object(){
}

Object::~Object(){
}

string Object::toString() const{
	stringstream ss;
	ss << "Object@" << this;
	return ss.str();
}

bool Object::Equals(Object* other) const{
	return other == this;
}