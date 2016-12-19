/*
 * suit.cpp
 *
 *  Created on: Dec 18, 2016
 *      Author: kent
 */

#include <string>

#include "suit.h"
#include "color.h"

deck::Suit const deck::Suit::CLUB(0, deck::Color::BLACK, "\u2663", "club");
deck::Suit const deck::Suit::DIAMOND(0, deck::Color::RED, "\u2666", "diamond");
deck::Suit const deck::Suit::HEART(0, deck::Color::RED, "\u2665", "heart");
deck::Suit const deck::Suit::SPADE(0, deck::Color::BLACK, "\u2660", "spade");

deck::Suit::Suit(signed int const _value, deck::Color const & _color,
		std::string const & _symbol, std::string const & _name) :
		value(_value), color(_color), symbol(_symbol), name(_name) {
}

deck::Suit::Suit(deck::Suit const & other) : value(other.value), color(other.color), symbol(other.symbol), name(other.name) {
}

deck::Suit::Suit(deck::Suit && other) : value(other.value), color(other.color), symbol(other.symbol), name(other.name) {
}

signed int deck::Suit::getValue(void) const {
	return value;
}

deck::Color deck::Suit::getColor(void) const {
	return color;
}

std::string deck::Suit::getSymbol(void) const {
	return symbol;
}

std::string deck::Suit::getName(void) const {
	return name;
}

std::ostream& deck::operator<<(std::ostream & out, deck::Suit const & suit) {
	out << suit.getName();
	return out;
}

bool deck::operator <(deck::Suit const & first, deck::Suit const & second) {
	return first.getValue() < second.getValue();
}

bool deck::operator >(deck::Suit const & first, deck::Suit const & second) {
	return second < first;
}

bool deck::operator <=(deck::Suit const & first, deck::Suit const & second) {
	return !(first > second);
}

bool deck::operator >=(deck::Suit const & first, deck::Suit const & second) {
	return !(first < second);
}

bool deck::operator==(deck::Suit const & first, deck::Suit const & second) {
	return first.getValue() == second.getValue();
}

bool deck::operator!=(deck::Suit const & first, deck::Suit const & second) {
	return !(first == second);
}
