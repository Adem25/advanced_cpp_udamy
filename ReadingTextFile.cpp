#include "ReadingTextFile.h"
#include "WritingTextFiles.h"
#include<iostream>
#include<fstream>

using namespace std;


void ReadingTextFile::readTxtFile() {
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
				inFile >> ws;
				if (!inFile)
				{
					break;
				}
			}
			cout << "End of " << fileName << endl;
			inFile.close();
		}
		else
		{
			cout << "Could not open file: " << fileName << endl;
		}
	}
	else
	{
		cout << "Set a text file name first" << endl;
	}
}