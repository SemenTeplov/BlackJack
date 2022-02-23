#include <vector>
#include <random>

#include "Card.hpp"

#ifndef __DECK__
#define __DECK__

class Deck {
public:
	Deck();
	~Deck() {};

	Card getCard();
	int getSize();

	std::vector<Card> _deck;

private:
	int indFirstCard;
	//std::vector<Card> _deck;
	Card *card;

	int randomNumber();
};

#endif //__DECK__
