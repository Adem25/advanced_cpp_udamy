#include "MyException.h"

const char* MyException::what() const throw() {
    return "MyException My custom exception occurred";
}