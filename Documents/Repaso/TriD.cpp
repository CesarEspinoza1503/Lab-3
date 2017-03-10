 #include <iostream>
#include <vector>
using std::string;
using std::cout;
using std::cin;
using std::endl;

void borrarMatriz(int**,int);
void SumarMatriz(int**,int**,int);
void RestarMatriz(int**,int**,int);
void MultiplicarMatriz(int**,int**,int);
void ImprimirMatriz (int**&, int);

std::vector<int**> respuestas;

int main(int argc, char const *argv[]) {
  int** matriz1;
  int** matriz2;
  int size1, size2;
  cout<<"Tamaño matriz1: ";
  cin>>size1;
  matriz1 = new int*[size1];
  for (int i = 0; i < size1; i++) {
    matriz1[i] = new int[size1];
  }
  for (int i = 0; i < size1; i++) {
    for (int j = 0; j < size1; j++) {
      cout<<"Ingresar valor en "<<i<<", "<<j<<endl;
      cin>>matriz1[i][j];
    }
  }
  cout<<endl<<"Tamaño matriz2: ";
  cin>>size2;
  matriz2 = new int*[size2];
  for (int i = 0; i < size2; i++) {
    matriz2[i] = new int[size2];
  }
  for (int i = 0; i < size2; i++) {
    for (int j = 0; j < size2; j++) {
      cout<<"Ingresar valor en "<<i<<", "<<j<<endl;
      cin>>matriz2[i][j];
    }
  }
  int menu=0;
  do {
    ImprimirMatriz(matriz1,size1);
    cout<<endl;
    ImprimirMatriz(matriz2,size2);
    cout<<endl<<"1)Suma Matriz"<<endl<<"2)Resta Matriz"<<endl
    <<"3)MultiplicarMatriz"<<endl<<"0)Salir"<<endl<<endl;
    cin>>menu;
    if (menu==1) {
      if(size1==size2){
        SumarMatriz(matriz1,matriz2,size1);
      }else{
        cout<<"No se puede sumar las matrices"<<endl;
      }
    }
    if(menu==2){
      if (size1==size2) {
        RestarMatriz(matriz1,matriz2,size1);
      }else{
        cout<<"No se puede restar las matrices"<<endl;
      }
    }
    if(menu==3){
      if (size1==size2) {
        cout<<endl;
        MultiplicarMatriz(matriz1,matriz2,size1);
      }else{
        cout<<"No se puede multiplicar"<<endl;
      }
    }
  } while(menu!=0);

  /*borrarMatriz(matriz1,size1);
  borrarMatriz(matriz2,size2);*/
}

void SumarMatriz(int** pMatriz1, int** pMatriz2,int pSize){
  int** resultado = new int*[pSize];
  for (int i = 0; i < pSize; i++) {
    resultado[i] = new int[pSize];
  }
  for (int i = 0; i < pSize; i++) {
    for (int j = 0; j < pSize; j++) {
      resultado[i][j]=(pMatriz1[i][j] + pMatriz2[i][j]);
    }
  }
  cout<<endl;
  ImprimirMatriz(resultado,pSize);
  cout<<endl;
}

void RestarMatriz(int** pMatriz1, int** pMatriz2,int pSize){
  int** resultado = new int*[pSize];
  for (int i = 0; i < pSize; i++) {
    resultado[i] = new int[pSize];
  }
  for (int i = 0; i < pSize; i++) {
    for (int j = 0; j < pSize; j++) {
      resultado[i][j]=(pMatriz1[i][j] - pMatriz2[i][j]);
    }
  }
  //respuestas.push_back(resultado);
  cout<<endl;
  ImprimirMatriz(resultado,pSize);
  cout<<endl;
}

void MultiplicarMatriz(int** pM1,int** pM2,int size){
  int** respuestaM = new int*[size];
  int suma=0;
  for (int i = 0; i < size; i++) {
    respuestaM[i] = new int[size];
  }
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      for (int k = 0; k < size; k++) {
        respuestaM[i][j] += pM1[j][k] * pM2[k][j];
      }
    }
  }
  ImprimirMatriz(respuestaM, size);
}

void borrarMatriz(int** pMatriz, int pSize){
  for (int i = 0; i < pSize; i++) {
    delete[] pMatriz[i];
  }
  delete[] pMatriz;
}

void ImprimirMatriz(int** &pMatriz, int pSize){
  for (int i = 0; i < pSize; i++) {
    for (int j = 0; j < pSize; j++) {
      cout<<pMatriz[i][j]<<" ";
    }
    cout<<endl;
  }
}
