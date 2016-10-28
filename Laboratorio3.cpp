#include <iostream>
#include <string>
using namespace std;

int*** crearCalendario();
int*** crearMatriz(int);

int int main(int argc, char const *argv[]) {
  int menu=0;
  while (menu!=4) {
    cout<<"     Laboratorio 3"<<"1)Ejercicio1\n2)Ejercicio2\n3)Ejercicio3\n4)Salir"<<endl;
    int menu;
    cin>>menu;
    if(menu==1){
      cout<<"Domingos que cayeron primer dia del mes durante el siglo 20"<<endl;

    }
    if(menu==2){

    }
    if(menu==3){

    }
  }
  return 0;
}

int*** crearCalendario(){
  int*** Calendario = new int [100][12][31];
  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 12; j++) {
      for (int k = 0; k < 31; k++) {
        if (j==4 || j==6 || j==9 || j==11) {
          while (k<31) {
            Calendario[i][j][k]=k;
          }
        }else{
          Calendario[i][j][k]=k;
        }
        if (i % 4 ==0 && j==2) {
          while (k<30) {
            Calendario[i][j][k]=k;
          }
        }
        if (j==2) {
          while (k<29) {
            Calendario[i][j][k]=k;
          }
        }
      }
    }
  }
}
