#pragma once
#include<iostream>

using namespace std;

// Allocating to much memory
class CanGoWrong {
public:
	CanGoWrong() {
		char* pMemory = new char[99999999];
		delete[] pMemory;
	}
};


void StandardExceptionss() {

	try
	{
		CanGoWrong wrong;
	}
	catch (bad_alloc& e)
	{
		cout << "Error: " << e.what() << endl;
	}

	cout << "Still runing" << endl;
}