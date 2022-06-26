main: main.o CircleDriver.o Circle.o
	g++ -std=c++11 -g -Wall main.o CircleDriver.o Circle.o -o main

main.o: main.cpp CircleDriver.hpp Circle.hpp
	g++ -std=c++11 -g -Wall -c main.cpp

Circle.o: Circle.hpp Circle.cpp
	g++ -std=c++11 -g -Wall -c Circle.cpp

CircleDriver.o: CircleDriver.hpp CircleDriver.cpp
	g++ -std=c++11 -g -Wall -c CircleDriver.cpp

clean:
	rm *.o main
