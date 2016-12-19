/*
 * card.h
 *
 *  Created on: Dec 18, 2016
 *      Author: kent
 */

#ifndef CARD_H_
#define CARD_H_


#include <ostream>

#include "suit.h"
#include "value.h"


namespace deck {


class Card {
public:
	Card(Value const & _value, Suit const & _suit);
//	Card(void) = delete;
	Card(Card const &);
	Card(Card &&);

	Card& operator=(Card const &);
	Card& operator=(Card &&);

	Value getValue(void) const;
	Suit getSuit(void) const;

private:
	Value const value;
	Suit const suit;
};

std::ostream& operator<<(std::ostream &, Card const &);

bool operator==(Card const &, Card const &);
bool operator!=(Card const &, Card const &);


}  // namespace deck


#endif /* CARD_H_ */
