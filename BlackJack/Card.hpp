#include "Suit.hpp"
#include "Value.hpp"

#include <ctime>

#ifndef __CARD__
#define __CARD__

template<typename Suit, typename Value>
class Card {
public:
	Card(Suit suit, Value value) : _suit(suit.getSuit()), 
		_value(value.getValue()) {};
	~Card() {};

	std::string getSuit() const {
		return _suit;
	};
	std::string getValue() const {
		return _value;
	};

private:
	std::string _suit;
	std::string _value;
};

#endif //__CARD__
