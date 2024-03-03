#include "WritingTextFiles.h"
#include<iostream>
#include<fstream>

using namespace std;

void WritingTextFiles::setFileName(string name) {
	fileName = name;
}

void WritingTextFiles::writeInNextLineTxt(string text) {
	ofstream outputFile;

	if (fileName.find(".txt") != string::npos) {
		outputFile.open(fileName, ios::app);
		if (outputFile.is_open()) {
			outputFile << text << endl;
			outputFile.close();
			cout << "Successfully written in: " << fileName << endl;
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

void WritingTextFiles::writeInNextLineTxt(int value) {
	ofstream outputFile;

	if (fileName.find(".txt") != string::npos) {
		outputFile.open(fileName, ios::app);
		if (outputFile.is_open()) {
			outputFile << value << endl;
			outputFile.close();
			cout << "Successfully written in: " << fileName << endl;
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

void WritingTextFiles::clearFile() {
	ofstream outputFile;

	if (fileName.find(".txt") != string::npos) {
		outputFile.open(fileName, ios::trunc);
		if (outputFile.is_open()) {
			outputFile.close();
			cout << "Successfully cleared the content in: " << fileName << endl;
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