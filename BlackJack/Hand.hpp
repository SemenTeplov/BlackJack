#include "Player.hpp"

#ifndef __HAND__
#define __HAND__

class Hand : Player {
public:
	Hand() : Player() {};
	~Hand() {};

	void setCount(int);
	int getCount() const;
	void setChip(int value);
	int getCountCash() const;

private:
	int _count = 0;
	int _cash = 0;
};

#endif //__HAND__
