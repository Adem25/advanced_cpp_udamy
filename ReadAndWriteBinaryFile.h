#pragma once
#include"WritingTextFiles.h"

struct Person
{
	char name[50];
	int age;
	double hight;
};

class ReadAndWriteBinaryFile : public WritingTextFiles
{
public:
	void writeInBinaryFile(Person person);
	void readFromBinaryFile();
};

