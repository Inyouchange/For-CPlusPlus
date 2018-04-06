// Homework3.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include"calArea.h"
#include<iostream>
using namespace std;

calArea::calArea(double length, double width) {
	setLength(length);
	setWidth(width);
}

void calArea::setLength(double length) {
	if (length >= 0)
		length1 = length;
	if (length < 0) {
		cout << "The number is <0" << endl;
		length1 = 0;
	}
}

double calArea::getLength() {
	return length1;
}

void calArea::setWidth(double width) {
	if (width >= 0)
		width1 = width;
	if (width < 0) {
		
		cout << "The number is <0" << endl;
		width1 = 0;
	}
}

double calArea::getWidth() {
	return width1;
}

double calArea::getRecArea() {
	return length1 * width1;

}

void calArea::displayMessage() {
	cout << "The area is " << getRecArea() << endl;
}
