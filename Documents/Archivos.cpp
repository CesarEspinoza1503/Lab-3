// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//imprimir matriz
void imprimirMatriz(char**, int);
bool  encontrarSalida(char**, int, int, int);

int main (int argc, char* argv[]) {
  char letra;
  ifstream myfile (argv[1]);
  int size=0; //tamaño de la matriz
  char** matriz=NULL;
  if (myfile.is_open())
  {
    int cont=0;

    //: Leer el tamaño de la matriz
    myfile>>size;
    //TODO: Leer el tamaño de la matriz e iniciarlizarla

    //TODO: Crear Matriz
    matriz = new char*[size];

    for (int i = 0; i < size; i++) {
      matriz[i] = new char[size];
    }
    int f = 0;
    int c = 0;
    for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
        myfile >> letra;
        matriz[i][j]=letra;
      }
    }
    for (int i = 0; i < size; i++) {
      if (matriz[i][0]=='.') {
        f=i;
      }
    }
    imprimirMatriz(matriz,size);
    cout<<endl;
    bool haySalida = encontrarSalida(matriz,size,f,c);
    if(haySalida){
      cout<<"True"<<endl;
    }else{
      cout<<"False"<<endl;
    }
    imprimirMatriz(matriz,size);

    while ( !myfile.eof() )
    {
      myfile >> letra;
      cout<<" "<<letra;
      if(cont == 9){
         cout<<endl;
         cont=0;
      }else
          cont++;

	//TODO:Llenar la matriz
} //end while
    myfile.close();
  }

  else cout << "El archivo no existe";



  //TODO: llamar función SalirLaberinto

  //TODO: Liberar Memoria
  for (int i = 0; i < size; i++) {
    delete[] matriz[i];
    matriz[i] = NULL;
  }
  delete[] matriz;
  return 0;
}


void imprimirMatriz(char** pMatriz, int pSize)
{
  for (int i = 0; i < pSize; i++) {
    for (int j = 0; j < pSize; j++) {
      cout<<pMatriz[i][j]<<" ";
    }
    cout<<endl;
  }
}

bool  encontrarSalida(char** matriz, int psize, int f, int c){
   if(c==psize-1){
     matriz[f][c]='*';
     return true;
   }else{
     if(matriz[f-1][c]=='.'){
       matriz[f][c]='*';
       encontrarSalida(matriz,psize,f-1,c);
     }
     if (matriz[f+1][c]=='.') {
       matriz[f][c]='*';
       encontrarSalida(matriz,psize,f+1,c);
     }
     if (matriz[f][c+1]=='.') {
       matriz[f][c]='*';
       encontrarSalida(matriz,psize,f,c+1);
     }
     if (matriz[f][c-1]=='.') {
       matriz[f][c]='*';
       encontrarSalida(matriz,psize,f,c-1);
     }
     cout<<"Columnas: "<<c<<", ";
     return false;
   }
 }
