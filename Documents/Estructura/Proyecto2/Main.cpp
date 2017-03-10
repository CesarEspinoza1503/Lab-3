#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <cstdlib>
#include "Object.h"
#include "TreeNode.h"
#include "Tree.h"
#include "Person.h"
#include "Employees.h"
using namespace std;

Tree* cargarArbol();
void imprimirArbol(Tree* arbol);

int main(int argc, char const *argv[])
{
	Tree* arbol = new Tree();
	int menu_opcion;
	do
	{
		cout<< "1)Cargar Arbol\n2)Listar\n3)Salir\n";
		cin >> menu_opcion;
		if (menu_opcion==1)
		{
			arbol = cargarArbol();
			cout << "Arbol Generado"<<endl;

		}
		if (menu_opcion==2)
		{
			imprimirArbol(arbol);
		}
	} while (menu_opcion != 3);
	cout<<"Cerrando..."<<endl;
	return 0;
}

/*
	Crea un arbol apartir de un archivo de texto
	Para esto hace un parseo
	Las tokens despues se vuelven a separar para dar los elementos
	para crear un empleado y asi poder insertar al arbol
*/
Tree* cargarArbol(){
	Tree* arbol = new Tree();
	ifstream fs;
	string parsed;
	int cont;
	fs.open("toRead.txt");
	vector<string> tokens;
	vector<string> subtokens;
	vector<int> tabs;
	//primer parseo..................
	if(fs.is_open()){
		while(!fs.eof()){
			getline(fs,parsed, '\n');
			tokens.push_back(parsed);
		}
	}
	//------------------------------
	//Segundo Parseo
	string temp = "";
	for (int i = 0; i < tokens.size(); ++i)
	{
		cont = 0;
		parsed = tokens.at(i);
		stringstream ss (tokens.at(i));
		string p;
		while(ss >> p){
			
			if (ss.peek() ==  ',')
			{
				ss.ignore(1,',');
			}
			subtokens.push_back(p);
		}
		for (int i = 0; i < parsed.length(); ++i)
		{
			if (parsed[i] == '\t')
			{
				cont++;
			}
		}
		tabs.push_back(cont);
	}
	string temp_asignacion;
	for (int i = 0; i < subtokens.size(); ++i)
	{
		vector<string> pseudo_empleado;//un vector con todos los atributos para crear un empleado
		
		string token_temp;
		for (int j = 0; j <= subtokens.at(i).length(); ++j)
		{
			token_temp = subtokens.at(i);
			if (token_temp[j]==',' || j == token_temp.length())
			{
				pseudo_empleado.push_back(temp_asignacion);
				temp_asignacion = "";
			}else{
				temp_asignacion += token_temp[j];
			}
			
		}
		/*
			CREACION E INSERCION DE EMPLEADOS Y NODOS
		*/
		Employees* empleado = new Employees(pseudo_empleado.at(0),pseudo_empleado.at(1) ,pseudo_empleado.at(2));
		TreeNode* nodo = new TreeNode(empleado);
		int identacion = tabs.at(i); //Esto nos da la cantidad de tabs por linea
		if (tabs.at(i) == 0)//Caso cuando incerta en la raiz
		{
			arbol->setRoot(nodo);
		}if (tabs.at(i) > 0 )//Caso cuando no se incerta en la raiz
		{
			if (tabs.at(i) > 0)
			{
				if (arbol->getRoot()->getLeftSon() == NULL)
				{
					arbol->getRoot()->setLeftSon(nodo);
					arbol->getRoot()->getLeftSon()->setFather(arbol->getRoot());
				}else{
					TreeNode* temporal = arbol->getRoot()->getLeftSon();
					while(temporal->getRightBrother() != NULL){
						temporal = temporal->getRightBrother();
					}
					temporal->setRightBrother(nodo);
					temporal->setFather(temporal->getFather());
				}
			}
		}
	}
	return arbol;
}


//Metodo de impresion del arbol
void imprimirArbol(Tree* arbol){
	TreeNode* neo = arbol->getRoot();
	string tabs = "";
	cout<< neo->getData()->toString()<<endl;
	while(neo->getLeftSon()!=NULL){
		neo = neo->getLeftSon();
		tabs += "\t";
		cout<< tabs << neo->getData()->toString()<<endl;
		while(neo->getRightBrother()!=NULL){
			neo = neo->getRightBrother();
			cout<< tabs <<neo->getData()->toString()<<endl;
		}
	}
}