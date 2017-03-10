main: Main.o Object.o ADTList.o FSArrayList.o VSArrayList.o Person.o Node.o LList.o Employees.o
	g++ Main.o Object.o ADTList.o FSArrayList.o VSArrayList.o Person.o Node.o LList.o Employees.o -o main

Main.o: Main.cpp Object.h ADTList.h FSArrayList.h Person.h Employees.h VSArrayList.h LList.h Node.h
	g++ -c Main.cpp

Object.o: Object.h Object.cpp
	g++ -c Object.cpp

Person.o: Object.h Person.h Person.cpp
	g++ -c Person.cpp

ADTList.o: Object.h ADTList.h ADTList.cpp
	g++ -c ADTList.cpp

FSArrayList.o: ADTList.h FSArrayList.h FSArrayList.cpp
	g++ -c FSArrayList.cpp

VSArrayList.o: ADTList.h VSArrayList.h VSArrayList.cpp
	g++ -c VSArrayList.cpp

Node.o: Object.h Node.h Node.cpp
	g++ -c Node.cpp

LList.o: ADTList.h Node.h LList.h LList.cpp
	g++ -c LList.cpp

Employees.o: Person.h Employees.h Employees.cpp 
	g++ -c Employees.cpp

clean:
	rm -f *.o main
