#include <iostream>
#include <string>
#include <cmath>
using namespace std;

char** crearMatriz(int);

void imprimirMatriz(char**,int);

void borrarMatriz(char**,int);

void imprimirMenu();

bool validarNumero (int);

//int pow (int, int, int);

int getNumero(char**, int);


int main(int argc, char const *argv[]) {
    string p1 = "Jugador 1";
    string p2 = "Jugador 2";
    int size;
    int puntos1 = 0;
    int puntos2 = 0;
    int menu=1;
    int coordX;
    int coordY;
    char numero;
    bool gameState=false;
    bool turno=true;
    cout<<"   Proyecto 1 Programacion 3"<<endl<<"   -------------------------";
    cout<<endl<<endl<<"         X-O primos"<<endl<<endl;

    while (menu!=0) {
      imprimirMenu();
      cin >> menu;
      if (menu == 1)
      {
        do {
          cout<<"Ingrese tamaño de la matriz: ";
          cin>>size;
          if(size<3){
            cout<<"La matriz no puede ser menor a 3"<<endl;
          }
        } while(size<3);
        char** matriz = crearMatriz(size);
        gameState=false;
        while (gameState==false) {
          imprimirMatriz(matriz,size);

          if (turno==true) {
            int verificar = getNumero(matriz, size);
            gameState = validarNumero(verificar);

            int matriz_llena = 0;
            for (int i = 0; i < size; ++i)
            {
              for (int j = 0; j < size; ++j)
              {
                if (matriz[i][j] != ' ')
                {
                  matriz_llena ++;
                }
              }
            }
            //LA MATRIZ SE LLENO Y NO HAY GANADOR
            if (matriz_llena == (size * size))
            {
              cout<<"EMPATE"<<endl;
              gameState == true;
            }

            if (gameState == true && matriz_llena != (size *size))
            {
              puntos2 ++;
              cout<<"Gano "<<p2<<endl;

            }else{
              cout<<"Turno "<< p1 <<endl;
              do
              {
                cout<<"Ingresar coordenada X: "<<endl;
                cin>>coordX;
                cout<<"Ingresar coordenada y: "<<endl;
                cin>>coordY;
                if (coordY > size-1 || coordX > size-1)
                {
                  cout<<endl<< "Posicion fuera de juego"<<endl;
                }
              } while (coordX > size-1 || coordY > size-1);
              cout<<"Ingresar digito: "<<endl;
              cin >> numero;
              matriz[coordY][coordX]= numero;
              turno=false;
            }
            
          }else{


            int verificar = getNumero(matriz, size);
            gameState = validarNumero(verificar);

            int matriz_llena = 0;
            for (int i = 0; i < size; ++i)
            {
              for (int j = 0; j < size; ++j)
              {
                if (matriz[i][j] != ' ')
                {
                  matriz_llena ++;
                }
              }
            }
            //LA MATRIZ SE LLENO Y NO HAY GANADOR
            if (matriz_llena == (size * size))
            {
              cout<<"EMPATE"<<endl;
              gameState == true;
            }


            if (gameState == true && matriz_llena != (size *size))
            {
              puntos1 ++;
              cout<<"Gano "<<p1<<endl;

            }else{
              cout<<"Turno "<< p2 <<endl;

              do
              {
                cout<<"Ingresar coordenada X: "<<endl;
                cin>>coordX;
                cout<<"Ingresar coordenada y: "<<endl;
                cin>>coordY;
                if (coordY > size-1 || coordX > size-1)
                {
                  cout<< endl << "Posicion fuera de juego"<<endl;
                }
              } while (coordX > size-1 || coordY > size-1);


              cout<<"Ingresar digito: "<<endl;
              cin >> numero;
              matriz[coordY][coordX]= numero;
              turno=true;
            }
            
          }
        }
        //Termina el juego
        borrarMatriz(matriz,size);
        cout<<endl<<"Desea Salir?[0]"<<endl;
        cin>>menu;
      }
      if (menu == 2)
      {
        cout<<"Marcador:" << endl << p1 << ": " << puntos1
        <<endl<<p2<<": " << puntos2 << endl;
      }
      if (menu == 3)
      {
        cout<<"Jugador 1: "<<p1<<endl
        <<"Jugador 2: "<<p2<<endl;
        cout<<"Nuevo nombre Jugador 1: ";
        cin >> p1;
        cout<<"Nuevo nombre Jugador 2: ";
        cin >> p2;
      }
    }
  return 0;
}

char** crearMatriz(int size){
  char** matriz;
  matriz = new char*[size];
  for (int i = 0; i < size; i++) {
    matriz[i] = new char[size];
  }
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      matriz[i][j]=' ';
    }
  }
  return matriz;
}


void borrarMatriz(char** pMatriz,int pSize){
  //borrar memoria de la matriz
	for(int i=0;i<pSize;i++){
		delete[] pMatriz[i];
		pMatriz[i]=NULL;
	}
	delete[]pMatriz;
}

void imprimirMatriz(char** pMatriz,int pSize){
  for (int i = 0; i < pSize; i++) {
    for (int j = 0; j < pSize; j++) {
      if (j != pSize-1)
      {
        cout<<pMatriz[i][j]<<"_|";
      }else{
        cout<< pMatriz[i][j]<<"_";
      }
      
    }
    cout<<endl;
  }
}

int chrToInt(char pChar){
  int num = pChar - '0';
  return num;
}

void imprimirMenu(){
  cout<<endl<<"1)Jugar"<<endl<<"2)Puntuacion"<< endl <<"3)Cambiar nombres"
  <<endl<<"4)Salir"<<endl;
}

bool validarNumero (int pNum){
  int a=0;
  for (int i = 1; i < pNum+1; i++) {
    if(pNum%i==0){
      a++;
    }
  }
  if (a!=2) {
    return false;
  }else{
    return true;
  }
}


int getNumero(char** pMatriz, int size){
  int* numero = new int[size];
  int num_complete = 0;
  int cont = size;
  int multiplicador;

  //linea horizontal
  for (int i = 0; i < size; ++i)
  {
    for (int j = 0; j < size; ++j)
    {
      if (pMatriz[i][j] != ' ')
      {
        multiplicador = pow(10 , cont);

        num_complete += (chrToInt(pMatriz[i][j]) * multiplicador);

        cont --;
        if (i==size-1 && num_complete != 0 && pMatriz[i][size-1] != ' ' && j==size-1)
        {
          return num_complete;
        }
      }
    }
  }

  //DIAGONAL
  

  for (int i = 0; i < size; ++i)
  {
    for (int j = 0; j < size; ++j)
    {
      if (i==j && pMatriz[i][j] != ' ')
      {
        num_complete = 0;
        cont = size;

        multiplicador = pow(10 , cont);

        num_complete += chrToInt(pMatriz[i][j]) * multiplicador;

        cont --;
        if (j==size-1 && i == size-1 && pMatriz[size-1][size-1] !=' ')
        {
          return num_complete;
        }
      }
    }
  }
  //DIAGONAL INVERSA
  
  for (int i = size-1; i >= 0; --i)
  {
    for (int j = size-1; j >= 0; --j)
    {
      if (i==j && pMatriz[i][j] != ' ')
      {
        num_complete = 0;
        cont = size;

        multiplicador = pow(10 , cont);

        num_complete += chrToInt(pMatriz[i][j]) * multiplicador;

        cont --;
        if (j==size-1 && i == size-1 && pMatriz[size-1][0] !=' ')
        {
          return num_complete;
        }
      }
    }
  }
  return 4;
}

/*int pow (int a, int b, int c){
  if(b==0){
    return a;
  }else{
    return pow(a*c, b-1 , c);
  }

}*/