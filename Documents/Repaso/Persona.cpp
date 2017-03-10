#include "Persona.h"

Persona::Persona(string pNombre, int pAltura,int pPeso,string pHobby){
  this->nombre = pNombre;
  this->altura = pAltura;
  this->peso = pPeso;
  this->hobby = pHobby;
}

Persona::~Persona(){
  cout<<endl<<"Matando Instancia Persona...."<<endl;
}

void Persona::setNombre(string pNombre){
  this->nombre=pNombre;
}

void Persona::setAltura(int pAltura){
  this->altura=pAltura;
}

void Persona::setPeso(int pPeso){
  this->peso=pPeso;
}

void Persona::setHobby(string pHobby){
  this->hobby=pHobby;
}

void imprimir(){
  cout<<"Nombre: " << nombre << endl;
}
