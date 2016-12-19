/*
 * value.cpp
 *
 *  Created on: Dec 18, 2016
 *      Author: kent
 */

#include <string>
#include <ostream>

#include "value.h"

deck::Value const deck::Value::ACE(1, "A", "ace");
deck::Value const deck::Value::TWO(2, "2", "two");
deck::Value const deck::Value::THREE(3, "3", "three");
deck::Value const deck::Value::FOUR(4, "4", "four");
deck::Value const deck::Value::FIVE(5, "5", "five");
deck::Value const deck::Value::SIX(6, "6", "six");
deck::Value const deck::Value::SEVEN(7, "7", "seven");
deck::Value const deck::Value::EIGHT(8, "8", "eight");
deck::Value const deck::Value::NINE(9, "9", "nine");
deck::Value const deck::Value::TEN(10, "10", "ten");
deck::Value const deck::Value::JACK(11, "J", "jack");
deck::Value const deck::Value::QUEEN(12, "Q", "queen");
deck::Value const deck::Value::KING(13, "K", "king");

deck::Value::Value(signed int const _value, std::string const & _symbol,
		std::string const & _name) :
		value(_value), symbol(_symbol), name(_name) {
}

deck::Value::Value(Value const & other) :
		value(other.value), symbol(other.symbol), name(other.name) {
}

deck::Value::Value(Value&& other) :
		value(other.value), symbol(other.symbol), name(other.name) {
}

int deck::Value::getValue() const {
	return value;
}

std::string deck::Value::getSymbol() const {
	return symbol;
}

std::string deck::Value::getName() const {
	return name;
}

std::ostream& deck::operator <<(std::ostream & out, deck::Value const & value) {
	out << value.getName();
	return out;
}

bool deck::operator<(deck::Value const & first, deck::Value const & second) {
	return first.getValue() < second.getValue();
}

bool deck::operator>(deck::Value const & first, deck::Value const & second) {
	return second < first;
}

bool deck::operator<=(deck::Value const & first, deck::Value const & second) {
	return !(first > second);
}

bool deck::operator>=(deck::Value const & first, deck::Value const & second) {
	return !(first < second);
}

bool deck::operator ==(deck::Value const & first, deck::Value const & second) {
	return first.getValue() == second.getValue();
}

bool deck::operator!=(deck::Value const & first, deck::Value const & second) {
	return !(first == second);
}
