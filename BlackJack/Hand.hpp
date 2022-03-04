#include "Player.hpp"

#ifndef __HAND__
#define __HAND__

class Hand : Player {
public:
	Hand() : Player() {};
	~Hand() {};

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

#endif //__HAND__
