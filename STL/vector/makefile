#makefile for vector

vector: vector.h  main.o 
	g++ -o vector vector.h main.cpp
main.o: vector.h main.cpp
	g++ -c main.cpp
#vector.o: vector.h
#	g++ -c vector.h
clear:
	rm -f *.o
	rm -f vector
