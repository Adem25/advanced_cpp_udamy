#include "TestVirtual.h"
#include<iostream>

using namespace std;

void Base::Method1() {
	cout << "Base::Method1" << endl;
}

void Base::Method2() {
	cout << "Base::Method2" << endl;
	}

void Derived::Method1() {
	cout << "Derived::Method1" << endl;
}

void Derived::Method2() {
	cout << "Derived::Method2" << endl;
}

void TestVirtual::Run() {
	Base* basePtr = new Derived();
	// Note - constructed as Derived, but pointer stored as Base*

	basePtr->Method1();  //  Prints "Base::Method1"
	basePtr->Method2();  //  Prints "Derived::Method2"
}