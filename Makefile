link: lab06.o 
	g++ -o lab06 lab06.o

lab06.o: lab06.cpp
	g++ -c -Wall -std=c++14 -g -pedantic-errors lab06.cpp

clean:
	/bin/rm p1 *.o