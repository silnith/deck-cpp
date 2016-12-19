/*
 * color.cpp
 *
 *  Created on: Dec 18, 2016
 *      Author: kent
 */


#include <string>
#include <ostream>

#include "color.h"


deck::Color const deck::Color::BLACK(0, "black");
deck::Color const deck::Color::RED(1, "red");

deck::Color::Color(signed int const _value, std::string const & _name) : value(_value), name(_name) {
}

deck::Color::Color(deck::Color const & other) : value(other.value), name(other.name) {
}

deck::Color::Color(deck::Color && other) : value(other.value), name(other.name) {
}

signed int deck::Color::getValue() const {
	return value;
}

std::string deck::Color::getName() const {
	return name;
}

std::ostream& operator<<(std::ostream & out, deck::Color const & color) {
	out << color.getName();
	return out;
}

bool deck::operator<(deck::Color const & first, deck::Color const & second) {
	return first.getValue() < second.getValue();
}

bool deck::operator>(deck::Color const & first, deck::Color const & second) {
	return second < first;
}

bool deck::operator<=(deck::Color const & first, deck::Color const & second) {
	return !(first > second);
}

bool deck::operator>=(deck::Color const & first, deck::Color const & second) {
	return !(first < second);
}

bool deck::operator==(deck::Color const & first, deck::Color const & second) {
	return first.getValue() == second.getValue();
}

bool deck::operator!=(deck::Color const & first, deck::Color const & second) {
	return !(first == second);
}
