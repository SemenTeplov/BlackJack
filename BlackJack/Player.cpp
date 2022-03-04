#include "Player.hpp"

void Player::setCard(Card card) {
	cards.push_back(card);
};

void Player::setChip(Chip chip) {
	chips.push_back(chip);
};

Card Player::getCard(int ind) {
	return cards.at(ind);
};

Chip Player::getChip(int ind) {
	return chips.at(ind);
};

void Player::delChip(int ind) {
	chips.erase(chips.begin() + ind);
};

int Player::getCountCards() {
	return cards.size();
};

int Player::getCountChips() {
	return chips.size();
};