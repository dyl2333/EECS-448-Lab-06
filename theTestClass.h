/**
*	@file theTestClass.h
*	@author Dylan Vondracek
*	@date 11-6-17
*	@brief test class for the list
*/

#ifndef THETESTCLASS_H
#define THETESTCLASS_H
#include <string>
#include <iostream>
#include "LinkedListOfInts.h"


class theTestClass
{
	public:
		
		theTestClass(LinkedListOfInts testableList);
		
		~theTestClass();
		
		void runTheTests();
		
		/**
		* @brief returns false after calling removeBack on empty list
		**/
		bool test01();
		/**
		* @brief returns false after calling removeFront() on an empty list
		**/		
		bool test02();
		/**
		* @brief List returns true if the list is empty, false is otherwise
		**/		
		bool test03();
		/**
		* @brief Test returns true if the size of the list is 2 after calling addFront(int) 2 times
		**/		
		bool test04();
		/**
		* @brief Test returns true if the list is empty, false is otherwise
		**/		
		bool test05();
		/**
		* @brief Test returns true if the size of the list is 4 after calling addBack(int) 2 times
		**/		
		bool test06();
		/**
		* @brief Test returns true if the size of the list is 14 after calling addBack(int) 10 times
		**/		
		bool test07();
		/**
		* @brief Test returns true if an item has been removed via removeFront() call from the list, returns false if list is empty
		**/		
		bool test08();
		/**
		* @brief Test returns true if specific number is within the list, return false if number not in list
		**/		
		bool test09();
		/**
		* @brief Test returns true if an item has been removed via removeBack() call from the list, returns false if list is empty
		**/		
		bool test10();
		
		
	private:
		LinkedListOfInts loInts;
		bool testItem;
};

#endif 
