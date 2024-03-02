#include<iostream>
#include"ExceptionsBasics.h"
#include"TestVirtual.h"
#include"CustomExceptions.h"
#include"StandardExceptions.h"
#include "ExceptionCatchingOrdner.h"
#include "WritingTextFiles.h"
#include "ReadingTextFile.h"


using namespace std;

int main() {
	int error = 0;
	ExceptionsBasics EB;
	StandardExceptions SE;
	CustomExceptions CE;
	TestVirtual TV;
	ExceptionCatchingOrdner ECO;
	WritingTextFiles WTF;
	ReadingTextFile RTF;

	EB.Run(error);
	SE.Run();
	CE.Run();
	TV.Run();
	ECO.Run(error);

	/*WTF.setFileNameTxtData("test.txt");
	WTF.writeInNextLine("This is line 2");
	WTF.writeInNextLine(22);
	//WTF.clearFile();*/

	RTF.setFileName("test.txt");
	RTF.readFile();

	return 0;
}