main: Main.o Object.o TreeNode.o Tree.o Person.o Employees.o 
	g++ Main.o Object.o TreeNode.o Tree.o Person.o Employees.o -o main

Main.o: Main.cpp Object.h TreeNode.h Tree.h Person.h Employees.o
	g++ -c Main.cpp

Object.o: Object.h Object.cpp
	g++ -c Object.cpp

Person.o: Object.h Person.h Person.cpp
	g++ -c Person.cpp

Employees.o: Person.h Employees.h Employees.cpp
	g++ -c Employees.cpp

TreeNode.o: Object.h TreeNode.h TreeNode.cpp
	g++ -c TreeNode.cpp

Tree.o: TreeNode.h Object.h Tree.h Tree.cpp
	g++ -c Tree.cpp

clean:
	rm -f *.o main
