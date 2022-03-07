#include <vector>

#include "Card.hpp"

#ifndef __Player__
#define __Player__

class Player {
public:
	Player() {};
	virtual ~Player() {};

	virtual void setCard(Card);
	virtual Card getCard(int);
	virtual int getCountCards() const;
	virtual void setChip(int value);
	virtual int getCountCash() const;

private:
	std::vector<Card> cards;
	int _cash = 0;
};

#endif //__Player__
