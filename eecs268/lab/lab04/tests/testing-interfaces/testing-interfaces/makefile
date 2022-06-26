run: main.o dog.o
	g++ -std=c++11 -g -Wall main.o dog.o -o run

main.o: main.cpp dog.h
	g++ -std=c++11 -g -Wall -c main.cpp

dog.o: dog.h dog.cpp
	g++ -std=c++11 -g -Wall -c dog.cpp

clean:
	rm *.o dog
