//#pragma once
#ifndef PERSONA_H
#define  PERSONA_H


#include <iostream>
#include <string>

class Persona{
private:
  std::string nombre;
  std::string ID;
  std::string telefono;
  std::string email;
  int dia, mes, year;
public:
  Persona();
  virtual void imprimir();
  //Persona(std::string,std::string,std::string,std::string,int,int,int);
  void setNombre(std::string);
  std::string getNombre();
  void setID(std::string);
  std::string getID();
  void setTelefono(std::string);
  std::string getTelefono();
  void setEmail(std::string);
  std::string getEmail();
  void setFechaNacimiento(int,int,int);
  int getDia();
  int getMes();
  int getYear();
};


#endif
