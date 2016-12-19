/*
 * card.cpp
 *
 *  Created on: Dec 18, 2016
 *      Author: kent
 */

#include "card.h"
#include "suit.h"
#include "value.h"

#include <ostream>

deck::Card::Card(deck::Value const & _value, deck::Suit const & _suit) :
		value(_value), suit(_suit) {
}

deck::Card::Card(deck::Card const & other) :
		value(other.value), suit(other.suit) {
}

deck::Card::Card(deck::Card && other) :
		value(other.value), suit(other.suit) {
}

deck::Value deck::Card::getValue(void) const {
	return value;
}

deck::Suit deck::Card::getSuit(void) const {
	return suit;
}

std::ostream & deck::operator<<(std::ostream & out, deck::Card const & card) {
	out << card.getValue() << " of " << card.getSuit();
	return out;
}

bool deck::operator==(deck::Card const & first, deck::Card const & second) {
	return first.getValue() == second.getValue()
			&& first.getSuit() == second.getSuit();
}

bool deck::operator!=(deck::Card const & first, deck::Card const & second) {
	return !(first == second);
}
