list:	dllnode.o object.o integer.o linkedlist.o main.o tdalist.o
	g++ dllnode.o object.o integer.o linkedlist.o main.o tdalist.o -o list

tdalist.o:	tdalist.h tdalist.cpp object.h
	g++ -c tdalist.cpp

object.o:	object.h object.cpp
	g++ -c object.cpp

dllnode.o:	dllnode.h dllnode.cpp object.h
	g++ -c dllnode.cpp

integer.o:	integer.h integer.cpp object.h
	g++ -c integer.cpp

linkedlist.o:	linkedlist.h linkedlist.cpp object.h dllnode.h
	g++ -c linkedlist.cpp

main.o:	main.cpp object.h tdalist.h integer.h 
	g++ -c main.cpp

clean:
	rm *.o

cleanall:	clean
	rm list
