/*
 * color.h
 *
 *  Created on: Dec 18, 2016
 *      Author: kent
 */

#ifndef COLOR_H_
#define COLOR_H_


#include <string>
#include <ostream>


namespace deck {


class Color {
public:
	static Color const BLACK;
	static Color const RED;

//	Color(void) = delete;
	Color(Color const &);
	Color(Color &&);

	Color & operator=(Color const &);
	Color & operator=(Color &&);

	signed int getValue() const;
	std::string getName() const;

private:
	signed int const value;
	std::string const name;

	Color(signed int const _value, std::string const & _name);
};


std::ostream& operator<<(std::ostream &, Color const &);

bool operator< (Color const &, Color const &);
bool operator> (Color const &, Color const &);
bool operator<= (Color const &, Color const &);
bool operator>= (Color const &, Color const &);

bool operator== (Color const &, Color const &);
bool operator!= (Color const &, Color const &);


}  // namespace deck


#endif /* COLOR_H_ */
