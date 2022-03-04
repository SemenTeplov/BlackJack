#include "Hand.hpp"

void Hand::setCard(Card card) {
	cards.push_back(card);
};

void Hand::setChip(Chip chip) {
	chips.push_back(chip);
};

Card Hand::getCard(int ind) {
	return cards.at(ind);
};

Chip Hand::getChip(int ind) {
	return chips.at(ind);
};

void Hand::delChip(int ind) {
	chips.erase(chips.begin() + ind);
};

int Hand::getCountCards() {
	return cards.size();
};

int Hand::getCountChips() {
	return chips.size();
};
