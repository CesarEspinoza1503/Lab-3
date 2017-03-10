#include <iostream>
#include <ctime>
using namespace std;
int Iterativo(int);
int Recursivo (int, int);


int main(int argc, char const *argv[])
{
	int menu;
	clock_t start, end;

	cout<<"1-Iterativo\n2-Recursivo\n: ";
	cin>>menu;
	if (menu==1)
	{
		start = clock();
		Iterativo(20);
		end = (clock() - start) /*/ 1000*/;
		cout<< "Tiempo " << end;
	}
	if (menu==2)
	{
		start = clock();
		Recursivo(4, 1);
		end = (clock() - start) /*/ 1000*/;
		cout << "Tiempo " << end;
	}
	return 0;
}


int Iterativo(int n){
	int result = 1;
	for (int i = n; i > 0; --i)
	{
		result *= i;
	}
	return result;
}


int Recursivo (int n, int result){
	if (n<=0)
		cout<<"boop";
	if (n==1)
		return result;
	else{
		return Recursivo(n-1, result*(n));
	}
}