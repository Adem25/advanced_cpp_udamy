#include "WritingTextFiles.h"
#include<iostream>
#include<fstream>

using namespace std;

void WritingTextFiles::setFileNameTxtData(string name) {
	FileName = name;
}

void WritingTextFiles::writeInNextLine(string text) {
	ofstream outputFile;

	if (FileName.find(".txt") != string::npos) {
		outputFile.open(FileName, ios::app);
		if (outputFile.is_open()) {
			outputFile << text << endl;
			outputFile.close();
			cout << "Successfully written in: " << FileName << endl;
		}
		else
		{
			cout << "Could not create file: " << FileName << endl;
		}
	}
	else
	{
		cout << "Set a text file name first" << endl;
	}

}

void WritingTextFiles::writeInNextLine(int value) {
	ofstream outputFile;

	if (FileName.find(".txt") != string::npos) {
		outputFile.open(FileName, ios::app);
		if (outputFile.is_open()) {
			outputFile << value << endl;
			outputFile.close();
			cout << "Successfully written in: " << FileName << endl;
		}
		else
		{
			cout << "Could not create file: " << FileName << endl;
		}
	}
	else
	{
		cout << "Set a text file name first" << endl;
	}

}

void WritingTextFiles::clearFile() {
	ofstream outputFile;

	if (FileName.find(".txt") != string::npos) {
		outputFile.open(FileName, ios::trunc);
		if (outputFile.is_open()) {
			outputFile.close();
			cout << "Successfully cleared the content in: " << FileName << endl;
		}
		else
		{
			cout << "Could not find file: " << FileName << endl;
		}
	}
	else
	{
		cout << "Set a text file name first" << endl;
	}
}