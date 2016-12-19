/*
 * value.h
 *
 *  Created on: Dec 18, 2016
 *      Author: kent
 */

#ifndef VALUE_H_
#define VALUE_H_


#include <string>
#include <ostream>


namespace deck {


class Value {
public:
	static Value const ACE;
	static Value const TWO;
	static Value const THREE;
	static Value const FOUR;
	static Value const FIVE;
	static Value const SIX;
	static Value const SEVEN;
	static Value const EIGHT;
	static Value const NINE;
	static Value const TEN;
	static Value const JACK;
	static Value const QUEEN;
	static Value const KING;

//	Value(void) = delete;
	Value(Value const &);
	Value(Value &&);

	Value & operator=(Value const &);
	Value & operator=(Value &&);

//	explicit operator std::string() const;

	int getValue() const;
	std::string getSymbol() const;
	std::string getName() const;

private:
	signed int const value;
	std::string const symbol;
	std::string const name;

	Value(signed int const _value, std::string const & _symbol, std::string const & _name);
};

std::ostream& operator<<(std::ostream&, Value const &);

bool operator< (Value const &, Value const &);
bool operator> (Value const &, Value const &);
bool operator<= (Value const &, Value const &);
bool operator>= (Value const &, Value const &);

bool operator== (Value const &, Value const &);
bool operator!= (Value const &, Value const &);


}  // namespace deck


#endif /* VALUE_H_ */
