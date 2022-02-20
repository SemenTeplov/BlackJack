#include "Card.hpp"

Card::Card() {
	if (randValue == 1) {
		_value = getSix();
	}
	else if (randValue == 2) {
		_value = getSeven();
	}
	else if (randValue == 3) {
		_value = getEight();
	}
	else if (randValue == 4) {
		_value = getNine();
	}
	else if (randValue == 5) {
		_value = getTen();
	}
	else if (randValue == 6) {
		_value = getKnight();
	}
	else if (randValue == 7) {
		_value = getQueen();
	}
	else if (randValue == 8) {
		_value = getKing();
	}
	else if (randValue == 9) {
		_value = getSeven();
	}
};

Card::~Card() {
	delete objSuit;
};

void Card::setSuit() {
	if (randSuit == 1) {
		_suit = objSuit->getHeart();
	}
	else if (randSuit == 2) {
		_suit = objSuit->getDimond();
	}
	else if (randSuit == 3) {
		_suit = objSuit->getClubs();
	}
	else if (randSuit == 4) {
		_suit = objSuit->getPeaks();
	}
};

std::string Card::getSuit() const {
	return _suit;
};

int Card::getValue() const {
	return _value;
};