#include "Player.hpp"

#ifndef __DEALER__
#define __DEALER__

class Dealer : Player {
public:
	Dealer() : Player() {};
	~Dealer() {};

	void setCard(Card);
	Card getCard(int);
	int getCountCards() const;
	void setChip(int value);
	int getCountCash() const;

private:
	std::vector<Card> cards;
	int _cash = 0;
};

#endif //__DEALER__
