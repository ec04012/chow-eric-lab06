link: firstline.cpp 
	g++ -Wall -std=c++14 -g -pedantic-errors -o firstline firstline.cpp

firstline: firstline.cpp
	g++ -Wall -std=c++14 -g -pedantic-errors -o firstline firstline.cpp
clean:
	/bin/rm p1 *.o