#include "Dealer.hpp"

void Dealer::setCard(Card card) {
	cards.push_back(card);
};

void Dealer::setChip(Chip chip) {
	chips.push_back(chip);
};

Card Dealer::getCard(int ind) {
	return cards.at(ind);
};

Chip Dealer::getChip(int ind) {
	return chips.at(ind);
};

void Dealer::delChip(int ind) {
	chips.erase(chips.begin() + ind);
};

int Dealer::getCountCards() {
	return cards.size();
};

int Dealer::getCountChips() {
	return chips.size();
};