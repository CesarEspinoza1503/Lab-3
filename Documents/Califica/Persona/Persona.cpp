#include "Persona.h"
using namespace std;

void Persona::imprimir(){
  cout<<"Esta es la instancia de una persona"<<endl;
}


/*Persona::Persona(std::string nombre,std::string ID,std::string telefono,std::string){
  this->nombre;
  this->ID;
  this->telefono;
  this->email;
}*/
Persona::Persona(){

}

void Persona::setEmail(std::string pEmail){
  email=pEmail;
}

std::string Persona::getEmail(){
  return email;
}

void Persona::setTelefono(std::string pTelefono){
  telefono=pTelefono;
}

std::string Persona::getTelefono(){
  return telefono;
}

void Persona::setFechaNacimiento(int pDia,int pMes,int pYear){
  dia=pDia; mes=pMes;year=pYear;
}

void Persona::setNombre(std::string pNombre){
  nombre=pNombre;
}

std::string Persona::getNombre(){
  return nombre;
}

void Persona::setID(std::string pID){
  ID=pID;
}

std::string  Persona::getID(){
  return ID;
}
