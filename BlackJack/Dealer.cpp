#include "Dealer.hpp"

void Dealer::setCard(Card card) {
	cards.push_back(card);
};

Card Dealer::getCard(int ind) {
	return cards.at(ind);
};

int Dealer::getCountCards() const {
	return cards.size();
};

int Dealer::getCountCash() const {
	return _cash;
};

void Dealer::setChip(int value) {
	_cash += value;
};
