// homework2.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include"swap1.h"

int main()
{
	// demonstrate maximum with int values
	int int1, int2;

	cout << "Input two integer values: ";
	cin >> int1 >> int2;
	swap(int1, int2);

	// invoke int version of maximum
	cout << "After swap: "
		<< int1<< " "<<int2;

	// demonstrate maximum with double values
	double double1, double2;

	cout << "\n\nInput two double values: ";
	cin >> double1 >> double2;
	swap(double1, double2);

	// invoke double version of maximum
	cout << "After swap: "
		<< double1<< " " << double2;

	// demonstrate maximum with char values
	char char1, char2;

	cout << "\n\nInput two characters: ";
	cin >> char1 >> char2;
	swap(char1, char2);

	// invoke char version of maximum
	cout << "After swap: "
		<< char1<< " " << char2 << endl;
} // end main


