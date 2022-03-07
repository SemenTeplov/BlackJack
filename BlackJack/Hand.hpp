#include "Player.hpp"

#ifndef __HAND__
#define __HAND__

class Hand : Player {
public:
	Hand() : Player() {};
	~Hand() {};

	void setCard(Card);
	Card getCard(int);
	int getCountCards() const;
	void setChip(int value);
	int getCountCash() const;

private:
	std::vector<Card> cards;
	int _cash = 0;
};

#endif //__HAND__
