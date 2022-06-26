//main.cpp

#include "CoolString.h"
#include <iostream>
int main()
{
	CoolString cs1(2); //stack allocated array
	CoolString cs2(2);

	cs1.setEntry(0,'a'); //object.classMethod
	cs1.setEntry(1,'b');

	std::cout << cs1.getSize() << '\n';

	cs2.setEntry(0,'a');
	cs2.setEntry(1,'b');

	//cs2 is the calling object
	//cs1 is the parameter
	if( cs2 == cs1 )
	{
		std::cout << "Equal!\n";
	}

}

/*

Notes:

Copy Constructors

- Copy constructors are invoked when...
	- When you pass an object by value
	OR
	- When you directly call a copy constructor
- By default, copy constructors make a shallow copy

We will define our own copy constructor to make a deep copy

Copy Constructor's signature is:
ClassName( const ClassName& original );


*/
