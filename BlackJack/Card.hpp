#include "PrototypeCard.hpp"

#include <ctime>

#ifndef __CARD__
#define __CARD__

class Card : public PrototypeCard {
public:
	Card(int value, int suit);
	~Card();

	void setSuit();
	std::string getSuit() const;
	char getValue() const;

private:
	std::string _suit;
	char _value;
	int _numValue;
	int _numSuit;

	Suit *objSuit = new Suit();
};

#endif //__CARD__
