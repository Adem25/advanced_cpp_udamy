#include "Vectors.h"
#include<iostream>
#include<vector>

using namespace std;

void Vectors::createStrVector(string str) {
	strings.push_back(str);
}

void Vectors::printStrVector() {
	for (int i = 0;i < strings.size();i++) {
		cout << strings[i] << endl;
	}
}

void Vectors::iterateStrVector() {
	for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
		cout << *it << endl;
	}
}

void Vectors::vectorsAndMemory() {
	/*vector.size() returns the number of elements currently in the vector, 
	while vector.capacity() returns the amount of memory allocated for the vector*/

	vector<double> numbers(0);
	int capacity = numbers.capacity();

	cout << "Size after creating vector: " << numbers.size() << endl;
	cout << "Capacity after creating vector: " << capacity << endl;

	for (int i = 0;i < 10000;i++) {
		if (numbers.capacity() != capacity) {
			capacity = numbers.capacity();
			cout << "Capacity has increased to: " << capacity << endl;
		}
		numbers.push_back(i);
	}

	// change size of vector
	numbers.resize(100);
	cout << "Size after resize to 100: " << numbers.size() << endl;
	cout << "Capacity after resize to 100: " << numbers.capacity() << endl;

	// change capacity of vector
	numbers.reserve(100000);
	cout << "Size after reserve to 100000: " << numbers.size() << endl;
	cout << "Capacity after reserve to 100000: " << numbers.capacity() << endl;
}

void Vectors::TwoDimensionalVectors() {
	// 3x4 vector initialized with 7
	vector< vector<int> > grid(3, vector<int>(4, 7));

	// put an 8 in the end how row 1. Vectors can have different sizes (not like arrays).
	grid[1].push_back(8);

	//interate through the vector
	for (int row = 0;row < grid.size();row++) {
		for (int col = 0;col < grid[row].size();col++) {
			// Flushing refers to the act of forcefully sending the buffered data to the output device (Buffer Management)
			// In this example it would work also without flush
			cout << grid[row][col] << flush;
		}
		cout << endl;
	}
}