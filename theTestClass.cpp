


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
	
	//redefine the list of tests based on all the new tests I would want to make
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
	/*istrue[8] = test09();
	istrue[9] = test10();
	istrue[10] = test11();
	istrue[11] = test12();
	istrue[12] = test13();
	istrue[13] = test14();
	istrue[14] = test15();
	istrue[15] = test16();	
	
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
*/

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

	cout<< "The results of test 1 is : " << forOut[0] << "!\n";
	cout<< "The results of test 2 is : " << forOut[1] << "!\n";
	cout<< "The results of test 3 is : " << forOut[2] << "!\n";
	cout<< "The results of test 4 is : " << forOut[3] << "!\n";
	cout<< "The results of test 5 is : " << forOut[4] << "!\n";
	cout<< "The results of test 6 is : " << forOut[5] << "!\n";
	cout<< "The results of test 7 is : " << forOut[6] << "!\n";
	cout<< "The results of test 8 is : " << forOut[7] << "!\n";
	//cout<< "The results of test 9 is : " << forOut[8] << "!\n";
	
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

bool theTestClass::test04()
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

bool theTestClass::test05()
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
bool theTestClass::test06()
{
	bool aBanger = true;
	/* testItem = false;
	for (int i = 0; i < 10; i++)
	{
		aBanger = loInts.removeBack();
	}
	cout << "the size of this item is " << loInts.size() << "\n";
	cout << aBanger << " what is this \n";
	
	if (loInts.size()== 4)
	{
		return true;
	}
	else
	{
		return false;
	}

*/


	aBanger = loInts.removeFront();
	
	cout << "the size of this item is " << loInts.size() << "\n";
	cout << aBanger << " what is this \n";
	
	if (loInts.size()== 13)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool theTestClass::test07()
{
	int i = 55;
	bool waht = loInts.search(i);
	
	
	return waht;
}

bool theTestClass::test08()
{
	return loInts.isEmpty();

	return true;
}

bool theTestClass::test09()
{

	return true;
}

bool theTestClass::test10()
{
	return true;

}

bool theTestClass::test11()
{
	
	return true;
}

bool theTestClass::test12()
{

	return true;
}

bool theTestClass::test13()
{
	
	return true;
}

bool theTestClass::test14()
{

	return true;
}

bool theTestClass::test15()
{

	return true;
}

bool theTestClass::test16()
{
	return true;

}
void theTestClass::removeAllItems()
{
	bool theTest = false;
	int theAmount = loInts.size();
	
	for (int i = 1; i <= theAmount; i++)
	{
		theTest = loInts.removeBack();
	}
	
	if (theTest)
	{
		
	}
	else
	{
		
	}
}