#	Author: John Gibbons
#	Date: 2016.10.26



prog: main.o theTestClass.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o theTestClass.o -o prog


main.o: main.cpp 
	g++ -g -Wall -std=c++11 -c main.cpp

theTestClass.o: theTestClass.h theTestClass.cpp
	g++ -std=c++11 -g -ggdb -Wall -c theTestClass.cpp

clean:
	rm main.o *.*~ prog
