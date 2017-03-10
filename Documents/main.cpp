#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
	ifstream myfile ("archivo.zip", ios::binary);
	string buffer;
	char * buffer2 = new char[256];
	

	if (myfile.is_open())
	{
		myfile.read(buffer2, 100);
		cout<<buffer2;
		/*while(!myfile.eof()){
			//myfile>>buffer;
			getline(myfile, buffer);
			cout<<buffer<<endl;
		}*/
		delete[] buffer2;
		myfile.close();
	}else{
		cout<<"El archivo es una mentira no existe";
	}

	return 0;
}