#include <vector>

#include "Card.hpp"

#ifndef __Player__
#define __Player__

class Player {
public:
	Player() {};
	virtual ~Player() {};

	virtual void setCount(int);
	virtual int getCount() const;
	virtual void setChip(int value);
	virtual int getCountCash() const;

private:
	int _count = 0;
	int _cash = 0;
};

#endif //__Player__
