//============================================================================
// Name        : deck-cpp.cpp
// Author      : Kent Rosenkoetter
// Version     :
// Copyright   : GPL
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "card.h"
#include "suit.h"
#include "value.h"

#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	deck::Card const aceOfSpades(deck::Value::ACE, deck::Suit::SPADE);
	cout << aceOfSpades << endl;

	deck::Card const newCard = aceOfSpades;
	cout << newCard << endl;
	return 0;
}
