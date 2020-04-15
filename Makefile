all: firstline longestline

firstline: firstline.cpp
	g++ -Wall -std=c++14 -g -pedantic-errors -o firstline firstline.cpp

longestline: longestline.cpp
	g++ -Wall -std=c++14 -g -pedantic-errors -o longestline longestline.cpp

clean:
	/bin/rm p1 *.o