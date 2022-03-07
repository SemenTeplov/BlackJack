#include "Hand.hpp"

void Hand::setCard(Card card) {
	cards.push_back(card);
};

Card Hand::getCard(int ind) {
	return cards.at(ind);
};

int Hand::getCountCards() const {
	return cards.size();
};

int Hand::getCountCash() const {
	return _cash;
};

void Hand::setChip(int value) {
	_cash += value;
};