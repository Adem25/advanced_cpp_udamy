#include "CustomExceptions.h"
#include"MyException.h"
#include<iostream>

using namespace std;

CustomExceptions::CustomExceptions() {};
void CustomExceptions::goesWrong() {
	throw MyException();
}
void CustomExceptions::Run() {
	try
	{
		goesWrong();
	}
	catch (MyException& e)
	{
		cout << e.what() << endl;
	}
}