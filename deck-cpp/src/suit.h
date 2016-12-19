/*
 * suit.h
 *
 *  Created on: Dec 18, 2016
 *      Author: kent
 */

#ifndef SUIT_H_
#define SUIT_H_


#include <string>
#include <ostream>

#include "color.h"


namespace deck {


class Suit {
public:
	static Suit const CLUB;
	static Suit const DIAMOND;
	static Suit const HEART;
	static Suit const SPADE;

//	Suit(void) = delete;
	Suit(Suit const &);
	Suit(Suit &&);

	Suit& operator=(Suit const &);
	Suit& operator=(Suit &&);

	signed int getValue() const;
	Color getColor() const;
	std::string getSymbol() const;
	std::string getName() const;


private:
	signed int const value;
	Color const color;
	std::string const symbol;
	std::string const name;

	Suit(signed int const _value, Color const & _color, std::string const & _symbol, std::string const & _name);
};


std::ostream& operator<<(std::ostream & out, Suit const &);

bool operator<(Suit const &, Suit const &);
bool operator>(Suit const &, Suit const &);
bool operator<=(Suit const &, Suit const &);
bool operator>=(Suit const &, Suit const &);

bool operator==(Suit const &, Suit const &);
bool operator!=(Suit const &, Suit const &);


}  // namespace deck


#endif /* SUIT_H_ */
