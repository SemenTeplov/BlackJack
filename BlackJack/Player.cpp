#include "Player.hpp"

void Player::setCount(int count) {
	_count += count;
};

int Player::getCount() const {
	return _count;
};

void Player::setChip(int value) {
	_cash += value;
};

int Player::getCountCash() const {
	return _cash;
};