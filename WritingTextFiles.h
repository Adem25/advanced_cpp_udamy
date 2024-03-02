#pragma once
#include<string>

using namespace std;

class WritingTextFiles
{
public:	
	void setFileNameTxtData(string name);
	void writeInNextLine(string text);
	void writeInNextLine(int value);
	void clearFile();
private:	
	string FileName;
};

