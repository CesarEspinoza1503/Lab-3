#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

void pan(string);
void divisor(int);
bool esPrimo(int pNum){
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


void niven(int);
void truncar(string);

int main(int argc, char const *argv[]) {
  int op;
  do {
    cin>>op;
    if (op==1) {

    }
    if (op==2) {
      cout<<endl<<"Divisor: "<<endl;
      int num;
      cin>>num;
      divisor(num);
    }
    if (op==3) {
      int number;
      cin>>number;
      niven(number);
    }
  } while(op!=4);
  return 0;
}

void divisor(int pNum){
  int suma=0;
  for (int i = 1; i <= pNum; i++) {
    if(pNum % i == 0 && esPrimo((pNum+i)/i)==true){
         suma += ((pNum+i)/i);
         cout<<pNum<<"+"<<i<<"/"<<i<<endl;
    }
  }
  cout<<suma;
}

/*void niven(string num){

  int sumaDig=0;
  int suma=0;
  int cont=num.length()-1;
  for (int i = 0; i < num.length(); i++) {
    int numero = num[i] - '0';
    sumaDig += numero;
    numero = (numero*(pow(10, cont)));
    suma += numero;
    cont--;
  }
  if(suma%sumaDig==0){
    if()
  }
}*/

void niven (int n){
  int cont=1;
  int temp = n;
  while(n/10!=0){
    n=n/10;
    ;
  }
  cout<<cont<<endl<<n;
  while (temp/10!=0) {
    temp=temp/10;

  }
}
