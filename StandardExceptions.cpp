#include "StandardExceptions.h"
#include<iostream>

using namespace std;

void StandardExceptions::canGoWrong() {
	char* pMemory = new char[99999999];
	delete[] pMemory;
}

void StandardExceptions::Run() {
	try
	{
		canGoWrong();
	}
	catch (bad_alloc& e)
	{
		cout << "StandardExceptions Error: " << e.what() << endl;
	}

	cout << "StandardExceptions Still runing" << endl;
}