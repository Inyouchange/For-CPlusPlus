#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "DeckOfCards.h"
#include<string>
using namespace std;

int main()
{
	DeckOfCards dc = DeckOfCards();
	dc.shuffle(180402);   

	for (int i = 0; i<52; i++) {
		cout << dc.dealCard().toString();
		puts(" ");
	}
} // end main


