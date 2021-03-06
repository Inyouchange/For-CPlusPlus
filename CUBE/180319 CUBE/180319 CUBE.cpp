
#include"calCube.h"
#include "stdafx.h"
#include<iostream>
#include"calCube.h"
using namespace std;


int main()
{
	calCube cube1;
	calCube *counterPtr = &cube1; // create pointer to counter
	calCube &counterRef = cube1;

	double length;
	double width;
	double height;

	//By object name
	cout << "Enter the side length of volume: ";
	cin >> length;
	cout << "Enter the side width of volume: ";
	cin >> width;
	cout << "Enter the side height of volume: ";
	cin >> height;
	calCube calCube(length, width, height);
	calCube.displayMessage();

	//By a pointer
	cout << "Enter the side length of volume: ";
	cin >> length;
	counterPtr->setLength(length);
	cout << "Enter the side width of volume: ";
	cin >> width;
	counterPtr->setWidth(width);
	cout << "Enter the side height of volume: ";
	cin >> height;
	counterPtr->setHeight(height);
	counterPtr->displayMessage();

	//By a reference
	cout << "Enter the side length of volume: ";
	cin >> length;
	counterRef.setLength(length);
	cout << "Enter the side width of volume: ";
	cin >> width;
	counterRef.setWidth(width);
	cout << "Enter the side height of volume: ";
	cin >> height;
	counterRef.setHeight(height);
	counterRef.displayMessage();
}


