#include<iostream>
using namespace std;

void mightGoWrong() {

	bool error1 = false;
	bool error2 = false;
	bool error3 = true;

	if (error1) {
		throw 8;
	}
	if (error2) {
		throw "Something went wrong.";
	}
	if (error3) {
		throw string("Something went wrong again");
	}
}

// Errors are thrown over different functions
void usesMightGoWrong() {
	mightGoWrong();
}

int ExceptionsBasic() {

	try
	{
		usesMightGoWrong();
	}
	catch (int e)
	{
		cout << "Error int: " << e << endl;
	}
	catch (char const* e) 
	{
		cout << "Error char: " << e << endl;
	}
	catch (string &e)
	{
		cout << "Error String: " << e << endl;
	}

	cout << "Still runing" << endl;

	return 0;
}