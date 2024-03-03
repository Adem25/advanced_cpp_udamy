#pragma once
#include<string>

using namespace std;

class WritingTextFiles
{
public:	
	string fileName;

	void setFileName(string name);
	void writeInNextLineTxt(string text);
	void writeInNextLineTxt(int value);
	void clearFile();
};

