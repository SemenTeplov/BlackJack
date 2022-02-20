#include "Suit.hpp"

#ifndef __PROTOTYPECARD__
#define __PROTOTYPECARD__

class PrototypeCard {
public:
	PrototypeCard() {};
	~PrototypeCard() {};

	int getSix();
	int getSeven();
	int getEight();
	int getNine();
	int getTen();
	int getKnight();
	int getQueen();
	int getKing();
	int getAce();

private:
	int _six = 6;
	int _seven = 7;
	int _eight = 8;
	int _nine = 9;
	int _ten = 10;
	int _knight = 10;
	int _queen = 10;
	int _king = 10;
	int _ace = 11;
};

#endif //__PROTOTYPECARD__
