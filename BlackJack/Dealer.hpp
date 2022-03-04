#include "Player.hpp"

#ifndef __DEALER__
#define __DEALER__

class Dealer : Player {
public:
	Dealer() : Player() {};
	~Dealer() {};

	void setCard(Card);
	void setChip(Chip);
	Card getCard(int);
	Chip getChip(int);
	void delChip(int);
	int getCountCards();
	int getCountChips();

private:
	std::vector<Card> cards;
	std::vector<Chip> chips;
};


#endif //__DEALER__
