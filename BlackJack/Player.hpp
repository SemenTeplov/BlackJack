#include <vector>

#include "Card.hpp"
#include "Chip.hpp"

#ifndef __Player__
#define __Player__

class Player {
public:
	Player() {};
	virtual ~Player() {};

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

#endif //__Player__
