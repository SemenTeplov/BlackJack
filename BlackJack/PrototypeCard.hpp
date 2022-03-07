#include "Suit.hpp"

#ifndef __PROTOTYPECARD__
#define __PROTOTYPECARD__

class PrototypeCard {
public:
	PrototypeCard() {};
	~PrototypeCard() {};

	char getSix() const;
	char getSeven() const;
	char getEight() const;
	char getNine() const;
	char getTen() const;
	char getKnight() const;
	char getQueen() const;
	char getKing() const;

private:
	char _six = '6';
	char _seven = '7';
	char _eight = '8';
	char _nine = '9';
	char _ten = 'T';
	char _knight = 'J';
	char _queen = 'Q';
	char _king = 'K';
};

#endif //__PROTOTYPECARD__
