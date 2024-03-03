#pragma once
#include<exception>

using namespace std;

class MyException : public exception {
	public:
		// overwrite what() from exception
		virtual const char* what() const throw();

};

