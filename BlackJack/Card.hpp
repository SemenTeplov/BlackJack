#include "PrototypeCard.hpp"

#ifndef __CARD__
#define __CARD__

class Card : PrototypeCard {
public:
	Card() {};
	~Card() {};



private:
	std::string _suit;
	int _value;
};

#endif //__CARD__
