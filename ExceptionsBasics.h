#pragma once
#include <string>

class ExceptionsBasics {
public:
    void mightGoWrong(int error);
    // Errors are thrown over different functions
    void usesMightGoWrong(int error);
    void Run(int error);
};

