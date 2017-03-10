#include "Persona.h"

int main(int argc, char const *argv[]) {

  Persona* instancia =new Persona("Cesar",175,180,"Dormir");
  instancia->setAltura(176);
  instancia->imprimir();
  delete instancia;
  return 0;
}
