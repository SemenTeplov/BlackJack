#include "Player.hpp"

#ifndef __HAND__
#define __HAND__

class Hand : Player {
public:
	Hand() : Player() {};
	~Hand() {};

	virtual void setCard(Card);
	virtual void setChip(Chip);
	virtual Card getCard(int);
	virtual Chip getChip(int);
	virtual void delChip(int);
	virtual int getCountCards();
	virtual int getCountChips();

private:
	std::vector<Card> cards;
	std::vector<Chip> chips;
};

#endif //__HAND__
