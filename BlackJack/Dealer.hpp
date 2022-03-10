#include "Player.hpp"

#ifndef __DEALER__
#define __DEALER__

class Dealer : Player {
public:
	Dealer() : Player() {};
	~Dealer() {};

	void setCount(int);
	int getCount() const;
	void setChip(int value);
	int getCountCash() const;

private:
	int _count = 0;
	int _cash = 0;
};

#endif //__DEALER__
