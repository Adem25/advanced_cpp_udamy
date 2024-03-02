#pragma once
#include<exception>

class MyException : public std::exception {
	public:
		// overwrite what() from exception
		virtual const char* what() const throw();

};

