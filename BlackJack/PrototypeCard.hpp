#include "Suit.hpp"

#ifndef __PROTOTYPECARD__
#define __PROTOTYPECARD__

class PrototypeCard {
public:
	PrototypeCard() {};
	~PrototypeCard() {};

	int getSix() const;
	int getSeven() const;
	int getEight() const;
	int getNine() const;
	int getTen() const;
	int getKnight() const;
	int getQueen() const;
	int getKing() const;
	int getAce() const;

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
