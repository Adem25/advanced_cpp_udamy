#include<iostream>
#include"ExceptionsBasics.h"
#include"TestVirtual.h"
#include"CustomExceptions.h"
#include"StandardExceptions.h"
#include "ExceptionCatchingOrdner.h"
#include "WritingTextFiles.h"
#include "ReadingTextFile.h"
#include "ParsingTextFile.h"
#include "StructsAndPadding.h"
#include "ReadAndWriteBinaryFile.h"

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
	ParsingTextFile PTF;
	ReadAndWriteBinaryFile RWB;

	EB.Run(error);
	SE.Run();
	CE.Run();
	TV.Run();
	ECO.Run(error);

	/*WTF.setFileName("test.txt");
	WTF.writeInNextLineTxt("This is line 2");
	WTF.writeInNextLineTxt(22);
	//WTF.clearFile();*/

	RTF.setFileName("test.txt");
	RTF.readTxtFile();

	PTF.setFileName("population.txt");
	PTF.parsePopulationExampleTxt();

	getExampleStructwithPadding();
	getExampleStructwithoutPadding();

	RWB.setFileName("testbin.bin");
	//RWB.writeInBinaryFile({"hans", 300, 0.1});
	RWB.readFromBinaryFile();

	return 0;
}