#include<iostream>
#include"ExceptionsBasics.h"
#include"TestVirtual.h"
#include"CustomExceptions.h"
#include"StandardExceptions.h"
#include "ExceptionCatchingOrdner.h"
#include "WritingTextFiles.h"

using namespace std;

int main() {
	int error = 0;
	ExceptionsBasics EB;
	StandardExceptions SE;
	CustomExceptions CE;
	TestVirtual TV;
	ExceptionCatchingOrdner ECO;
	WritingTextFiles WTF;

	EB.Run(error);
	SE.Run();
	CE.Run();
	TV.Run();
	ECO.Run(error);

	WTF.setFileNameTxtData("test.txt");
	WTF.writeInNextLine("hallo");
	WTF.writeInNextLine(22);
	WTF.clearFile();

	return 0;
}