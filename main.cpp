/**
*	@author Dylan Vondracek
*	@date 11-5-17
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "theTestClass.h"
#include "LinkedListOfInts.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	//TestSuite myTester;
	//myTester.runTests();
	
	theTestClass theClasser(testableList);
	theClasser.runTheTests();

	std::cout << "Running...\nAnd we're done.\nGoodbye.\n";
	
	return (0);

}

