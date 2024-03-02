#include "ReadingTextFile.h"
#include<iostream>
#include<fstream>

using namespace std;

void ReadingTextFile::setFileName(string name) {
	fileName = name;
}

void ReadingTextFile::readFile() {
	ifstream inFile;

	if (fileName.find(".txt") != string::npos) 
	{
		inFile.open(fileName);
		if (inFile.is_open()) {
			string line;

			while (inFile)
			{
				getline(inFile, line);
				cout << line << endl;
			}
			inFile.close();
		}
		else
		{
			cout << "Could not create file: " << fileName << endl;
		}
	}
	else
	{
		cout << "Set a text file name first" << endl;
	}
}