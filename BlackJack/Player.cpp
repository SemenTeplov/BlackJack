#include "Player.hpp"

void Player::setCard(Card card) {
	cards.push_back(card);
};

Card Player::getCard(int ind) {
	return cards.at(ind);
};

int Player::getCountCards() const {
	return cards.size();
};

void Player::setChip(int value) {
	_cash += value;
};

int Player::getCountCash() const {
	return _cash;
};