#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


int main(int argc, char const *argv[])
{
	string cadena;
	cin >> cadena;
	int size = cadena.length();
	int k=0, flag = 0;
	string reverso = cadena;
	for (int i = size-1; i > 0; --i)
	{
		reverso[k] = cadena[i];
		k++;
		cout << k << "\n";
	}
	for (int i = 0; i < size-1; ++i)
	{
		if (reverso[i] == cadena[i])
		{
			flag++;
		}
	}
	if (flag == size-1)
	{
		cout << reverso <<" es palindroma.";
	}
	


	return 0;
}