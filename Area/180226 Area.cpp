// Area.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

inline double rectArea(const double length, const double width) {
	return length * width;
}


int main()
{
	double length;
	cout << "Enter the side length of your rectangle: ";
	cin >> length;

	double width;
	cout << "Enter the side width of your rectangle: ";
	cin >> width;

	cout << "The area of the rectangle is " << rectArea(length, width) << endl;
}

