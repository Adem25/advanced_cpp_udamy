#include "ExceptionsBasics.h"
#include<string>
#include<iostream>

using namespace std;

void ExceptionsBasics::mightGoWrong(int error) {
	if (error == 0) {
		throw 8;
	}
	if (error == 1) {
		throw "ExceptionsBasics - Something went wrong.";
	}
	if (error == 2) {
		throw string("ExceptionsBasics - Something went wrong again");
	}
	else
	{
		throw "ExceptionsBasics - No Error";
	}
}

void ExceptionsBasics::usesMightGoWrong(int error) {
	mightGoWrong(error);
}

void ExceptionsBasics::Run(int error) {
	try
	{
		usesMightGoWrong(error);
	}
	catch (int e)
	{
		cout << "ExceptionsBasics Error int: " << e << endl;
	}
	catch (char const* e)
	{
		cout << "ExceptionsBasics Error char: " << e << endl;
	}
	catch (string& e)
	{
		cout << "ExceptionsBasics Error String: " << e << endl;
	}

	cout << "ExceptionsBasics Still runing" << endl;
}