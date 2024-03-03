#include "ReadAndWriteBinaryFile.h"
#include<iostream>
#include<fstream>
#include<cstring>

/*In C++, both reinterpret_cast<char*>(&someone) and (char*)someone can be used to interpret an object as an array of char.
However, reinterpret_cast is considered more modern and type - safe, and it's generally recommended to use it over the C-style cast (char*).*/

using namespace std;

void ReadAndWriteBinaryFile::writeInBinaryFile(Person person) {
	Person someone = person;
	ofstream outputFile;

	if (fileName.find(".bin") != string::npos)
	{
		outputFile.open(fileName, ios::binary);
		if (outputFile.is_open()) {
			outputFile.write(reinterpret_cast<char*>(&someone), sizeof(someone));
			cout << "Successfully written in: " << fileName << endl;
			outputFile.close();
		}
		else
		{
			cout << "Could not open file: " << fileName << endl;
		}
	}
	else
	{
		cout << "Set a bin file name first" << endl;
	}
}

void ReadAndWriteBinaryFile::readFromBinaryFile() {
	Person someoneElse = {};
	ifstream inputFile;
	char errMsg[100];

	if (fileName.find(".bin") != string::npos)
	{
		inputFile.open(fileName, ios::binary);
		if (inputFile.is_open()) {
			while(inputFile){
				inputFile.read(reinterpret_cast<char*>(&someoneElse), sizeof(someoneElse));
				cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.hight << endl;
				inputFile >> ws;
				if (!inputFile)
				{
					break;
				}
			}
			cout << "End of " << fileName << endl;
			inputFile.close();
		}
		else
		{
			cout << "Could not open file: " << fileName << " - Error: " << strerror_s(errMsg, sizeof(errMsg), errno) << endl;

		}
	}
	else
	{
		cout << "Set a bin file name first" << endl;
	}
}