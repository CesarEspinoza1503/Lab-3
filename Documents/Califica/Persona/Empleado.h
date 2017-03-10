#include <string>
#include "Persona.h"

using std::string;

class Empleado : public Persona{
private:
  string puesto;
  double salario;
  //int numTalentoHumano;
  //string emailTrabajo;
  //string numTelefono;

public:
  Empleado();
  virtual void imprimir();
  void setPuesto(string);
  string getPuesto();

  void setSalario(double);
  double getSalario();
};
