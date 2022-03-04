#include "Card.hpp"

Card::Card(int value, int suit) : _numValue(value), _numSuit(suit) {
	if (_numValue == 1) {
		_value = getSix();
	}
	else if (_numValue == 2) {
		_value = getSeven();
	}
	else if (_numValue == 3) {
		_value = getEight();
	}
	else if (_numValue == 4) {
		_value = getNine();
	}
	else if (_numValue == 5) {
		_value = getTen();
	}
	else if (_numValue == 6) {
		_value = getKnight();
	}
	else if (_numValue == 7) {
		_value = getQueen();
	}
	else if (_numValue == 8) {
		_value = getKing();
	}
	/*else if (_numValue == 9) {
		_value = getAce();
	}*/

	setSuit();
};

Card::~Card() {
};

void Card::setSuit() {
	if (_numSuit == 1) {
		_suit = objSuit->getHeart();
	}
	else if (_numSuit == 2) {
		_suit = objSuit->getDimond();
	}
	else if (_numSuit == 3) {
		_suit = objSuit->getClubs();
	}
	else if (_numSuit == 4) {
		_suit = objSuit->getPeaks();
	}
};

std::string Card::getSuit() const {
	return _suit;
};

char Card::getValue() const {
	return _value;
};