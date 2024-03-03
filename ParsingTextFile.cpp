#include "ParsingTextFile.h"
#include<iostream>
#include<fstream>

using namespace std;

void ParsingTextFile::parsePopulationExampleTxt() {
	ifstream input;

	string line;
	int poplulation;

	if (fileName.find(".txt") != string::npos) {
		input.open(fileName);

		if (input.is_open()) 
		{
			while(input)
			{
				// get line till : and put in line
				getline(input, line, ':');
				// put the next characters as int in poplulation
				input >> poplulation;
				// skip white space
				input >> ws;
				cout << line << " -- " << poplulation << endl;
				if (!input)
				{
					cout << "End of " << fileName << endl;
					break;
				}
			}
			input.close();
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