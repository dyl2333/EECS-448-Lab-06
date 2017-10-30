/**
*	@file List.h
*	@author 
*	@date 
*	@brief A List ADT
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
		* @brief After creation checks to see if the size is 0
		**/
		bool test01();
		/**
		* @brief After creation checks to see if the size is 0
		**/		
		bool test02();
		/**
		* @brief After creation checks to see if the size is 0
		**/		
		bool test03();
		/**
		* @brief After creation checks to see if the size is 0
		**/		
		bool test04();
		/**
		* @brief After creation checks to see if the size is 0
		**/		
		bool test05();
		/**
		* @brief After creation checks to see if the size is 0
		**/		
		bool test06();
		/**
		* @brief After creation checks to see if the size is 0
		**/		
		bool test07();
		/**
		* @brief After creation checks to see if the size is 0
		**/		
		bool test08();
		/**
		* @brief After creation checks to see if the size is 0
		**/		
		bool test09();
		/**
		* @brief After creation checks to see if the size is 0
		**/		
		bool test10();
		/**
		* @brief After creation checks to see if the size is 0
		**/		
		bool test11();
		/**
		* @brief After creation checks to see if the size is 0
		**/		
		bool test12();
		/**
		* @brief After creation checks to see if the size is 0
		**/		
		bool test13();
		/**
		* @brief After creation checks to see if the size is 0
		**/		
		bool test14();
		/**
		* @brief After creation checks to see if the size is 0
		**/		
		bool test15();
		/**
		* @brief After creation checks to see if the size is 0
		**/
		bool test16();


		
	private:
		LinkedListOfInts loInts;
};

#endif 
