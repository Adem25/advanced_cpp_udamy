#include "ExceptionCatchingOrdner.h"
#include<iostream>

using namespace std;

void ExceptionCatchingOrdner::goesWrong(int errorDetection) {
	if (errorDetection == 0) {
		throw bad_alloc();
	}

	if (errorDetection == 1) {
		throw exception();
	}
	else
	{
		cout << "ExceptionCatchingOrdner No Error" << endl;
	}
}

void ExceptionCatchingOrdner::Run(int errorDetection) {
	try
	{
		goesWrong(errorDetection);
	}
	// bad_alloc is a sub class of exception. The ordner should be from sub to main class
	catch (bad_alloc &e)
	{
		cout << "ExceptionCatchingOrdner catching bad_alloc" << e.what() << endl;
	}
	catch (exception& e)
	{
		cout << "ExceptionCatchingOrdner catching exception" << e.what() << endl;
	}
}