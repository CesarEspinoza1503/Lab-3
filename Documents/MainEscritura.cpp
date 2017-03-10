#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
	ofstream myfile("archivo.txt",ios::app|ios::binary);



	cout<<"Escribase el contenido del archivo: "<<endl;

	string buffer;
	for (int i = 0; i < 5; ++i)
	{
		getline(cin, buffer);
		myfile<< buffer<<endl;
	}
	myfile.close();
	return 0;
}