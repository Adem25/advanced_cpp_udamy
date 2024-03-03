#pragma once
#include<iostream>

using namespace std;

/* Padding refers to the insertion of additional bytes into a data structure to align its elements in memory.This is done for efficiency reasons,
particularly to ensure that the data structure aligns with the memory requirements of the underlying hardware.Padding helps in optimizing memory 
access and improving overall performance. */

// Example structure with padding
struct ExampleStructwithPadding {
    char a;      // 1 byte
    int b;       // 4 bytes
    char c;      // 1 byte
    double d;    // 8 bytes
};

// Use pragma to define the area where padding should not be used
#pragma pack(push, 1)
struct ExampleStructwithoutPadding {
    char a;      // 1 byte
    int b;       // 4 bytes
    char c;      // 1 byte
    double d;    // 8 bytes
};
#pragma pack(pop)

void getExampleStructwithPadding(){
    cout << sizeof(ExampleStructwithPadding) << endl;
}

void getExampleStructwithoutPadding() {
    cout << sizeof(ExampleStructwithoutPadding) << endl;
}