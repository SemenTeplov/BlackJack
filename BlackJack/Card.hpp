#include "PrototypeCard.hpp"

#ifndef __CARD__
#define __CARD__

class Card : PrototypeCard {
public:
	Card();
	~Card();

	void setSuit();

	std::string getSuit() const;
	int getValue() const;

private:
	std::string _suit;
	int _value = 0;
	int randValue = rand() % 9 + 1;
	int randSuit = rand() % 4 + 1;

	Suit *objSuit = new Suit();
};

#endif //__CARD__
