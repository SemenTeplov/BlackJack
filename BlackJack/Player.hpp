#include <vector>

#include "Card.hpp"
#include "Chip.hpp"

#ifndef __Player__
#define __Player__

class Player {
public:
	Player() {};
	~Player() {};

	void setCard(Card);
	void setChip(Chip);
	Card getCard(int);
	Chip getChip(int);
	void delChip(int);
	int getCountCards();
	int getCountChips();
	bool enough();

private:
	std::vector<Card> cards;
	std::vector<Chip> chips;

};

#endif //__Player__
