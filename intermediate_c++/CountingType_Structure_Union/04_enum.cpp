/*****************************************************************
/***  Exercise of learning c++ course                         ***/
/***  Course teacher: Mr. Shirafkan                           ***/
/***  Chapter: pointer                                        ***/
/***  Section: 3                                              ***/
/***  Copyleft H. E. Derakhshan 2020, All lefts reserved!     ***/
/***  Date: 01/10/2021                                        ***/
/****************************************************************/


// Course title: enum

#include <iostream>
//#include <curses.h>

using namespace std;



int main()
{	
	enum x{a , b ,c };	
	
	int x = 8;	   // OK: hide enum
//	int a = 5;     // Error  

	cout << x <<endl; 
	{
		int a =10; // OK: inner scope can hide outer a
		
		cout <<"inner scope a = "<< a <<endl;  //10
	}
		
	cout <<"outer scope a = "<< a <<endl;	   // 0
	return 0;
}

