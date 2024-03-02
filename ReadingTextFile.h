#pragma once
#include<string>

using namespace std;

class ReadingTextFile
{
public:
	void setFileName(string name);
	void readFile();
private:
	string fileName;
};

