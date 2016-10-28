#include <iostream>
#include <string>
using namespace std;

int*** crearCalendario();
int*** crearMatriz(int);

int main() {
  int menu=2;
  do {
    cout<<"     Laboratorio 3\n"<<"1)Ejercicio1\n2)Ejercicio2\n3)Ejercicio3\n4)Salir"<<endl;
    int menu;
    cin>>menu;
    if(menu==1){
      cout<<"Domingos que cayeron primer dia del mes durante el siglo 20"<<endl;
      int* dias_semana = new int[7];
      for (int i = 1; i <= 7; i++) {
        dias_semana[i]=i;
      }
      int* semana = new int[7];
      for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 12; j++) {
          if (i % 4 == 0 && j==2) {
            for (int k = 0; k <= 29; k++) {
              for (int z = 0; z < 7; z++) {
                int temp;
                semana[z]=k;
              }
              cout<<k<<" ";
            }
          }
          cout<<endl<<j<<" ";
        }
        cout<<endl<<i<<" ";
      }
    }
    if(menu==2){
      int grado_poli;
      cout<<"Ingrese el grado mas alto del polinomio: ";
      cin>>grado_poli;
      int polinomio[3][grado_poli];
      int binomio;
      int cont = grado_poli;
      for (int i = 0; i <= grado_poli; i++) {
        cout<<"Ingrese el polinomio x^"<<cont<<": ";
        cin>>polinomio[0][i];
        cout<<endl;
        cont --;
      }
      cout<<"Ingrese a: ";
      cin>>binomio;
      cout<<endl;
      for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= grado_poli; j++) {
          if (i==0) {
            cout<<polinomio[i][j]<<" ";
          }
          polinomio[i][j]=(polinomio[i][j]*binomio)+ (polinomio[i][j]);
          if(i==1){
            cout<<polinomio[i][j]<<" ";
          }
        }
        cout<<endl;
      }
    }
    if(menu==3){
      cout<<"Permutacion"<<endl;
      cout<<"Ingrese un numero que no tenga mas de 4 cifras";
      char num;
      cin>> num;
      /*for (int i = 0; i < 5; i++) {
        char temp = num[i];
        if((i+1)<5){
          num[i+1]= num[i];
        }
        if((i+1)>5){
          num[1]= num[i];
        }
        cout<< num[i];
      }*/
    }
  }while (menu!=4);
  return 0;
}

int*** crearMatriz(int size){
  int*** matriz = new int**[size];
  for (int i = 0; i < size; i++) {
    matriz[i]=new int*[3];
  }
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < 3; j++) {
      matriz[i][j]= new int[size];
    }
  }
  return matriz;
}
