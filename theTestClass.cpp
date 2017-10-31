/**
*	@file theTestClass.cpp
*	@author Dylan Vondracek
*	@date 11-6-17
*	@brief test class for the list
*/


//#include "LinkedListOfInts.h"
#include "theTestClass.h"
#include <string>
#include <iostream>
using namespace std;

theTestClass::theTestClass(LinkedListOfInts testableList)
{
	loInts = testableList;
}


theTestClass::~theTestClass()
{
	
}

void theTestClass::runTheTests()
{

	bool istrue[16];
	string forOut[16];
	
	istrue[0] = test01();
	istrue[1] = test02();
	istrue[2] = test03();
	istrue[3] = test04();
	istrue[4] = test05();
	istrue[5] = test06();
	istrue[6] = test07();
	istrue[7] = test08();
	istrue[8] = test09();
	istrue[9] = test10();


	for (int i = 0; i < 16; i++)
	{
		if (istrue[i] == true)
		{
			forOut[i] = "PASSED";
		}
		else
		{
			forOut[i] = "FAILED";
		}
	}

	cout<< "Test 1: List returns false after calling removeBack() on an empty list: " << forOut[0] << "!\n";
	cout<< "Test 2: List returns false after calling removeFront() on an empty list: " << forOut[1] << "!\n";
	cout<< "Test 3: List returns true if the list is empty, false is otherwise: " << forOut[2] << "!\n";
	cout<< "Test 4: Test returns true if the size of the list is 2 after calling addFront(int) 2 times: " << forOut[3] << "!\n";
	cout<< "Test 5: List returns true if the list is empty, false is otherwise: " << forOut[4] << "!\n";
	cout<< "Test 6: Test returns true if the size of the list is 4 after calling addBack(int) 2 times: " << forOut[5] << "!\n";
	cout<< "Test 7: Test returns true if the size of the list is 14 after calling addBack(int) 10 times: " << forOut[6] << "!\n";
	cout<< "Test 8: Test returns true if an item has been removed via removeFront() call from the list, returns false if list is empty: " << forOut[7] << "!\n";
	cout<< "Test 9: Test returns true if specific number is within the list, return false if number not in list: " << forOut[8] << "!\n";
	cout<< "Test 8: Test returns true if an item has been removed via removeBack() call from the list, returns false if list is empty: " << forOut[9] << "!\n";
	
}
//remove back on empty list will return false.
bool theTestClass::test01()
{
	if (loInts.removeBack() == false)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

bool theTestClass::test02()
{
	if (loInts.removeFront() == false)
	{
		return true;
	}
	else
	{
		return false;
	}
	

}
bool theTestClass::test03()
{
	if (loInts.isEmpty())
	{
		return true;
	}
	else
	{
		return false;
	}
	
	
}
bool theTestClass::test04()
{
	int test1=5;
	int test2= 3;
	
	
	loInts.addFront(test1);
	loInts.addFront(test2);
	
	if (loInts.size() == 2)
	{
		
		return true;
	}
	else
	{
		return false;
	}

}

bool theTestClass::test05()
{
	return loInts.isEmpty();

}

bool theTestClass::test06()
{
	int test4=55;
	int test3= 33;
	
	
	loInts.addBack(test4);
	loInts.addBack(test3);
	
	if (loInts.size() == 4)
	{
		
		return true;
	}
	else
	{
		return false;
	}
	
	return true;
}

bool theTestClass::test07()
{
	for (int i = 0; i <10; i++)
	{
		loInts.addBack(i);
	}
	if (loInts.size() == 14)
	{
		return true;
	}
	else
	{
		return false;
	}
}
// im getting an error for some reason

///something in removeback and removefront do not work need to investgate.
bool theTestClass::test08()
{
	bool aBanger = true;

	aBanger = loInts.removeFront();
	
	return aBanger;

}

bool theTestClass::test09()
{
	int i = 55;
	bool waht = loInts.search(i);
	
	
	return waht;
}

bool theTestClass::test10()
{

	testItem = false;
	for (int i = 0; i < 10; i++)
	{
		testItem = loInts.removeBack();
	}
	
	return testItem;
	



}

