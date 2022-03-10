#include "Dealer.hpp"

void Dealer::setCount(int count) {
	_count += count;
};

int Dealer::getCount() const {
	return _count;
};

int Dealer::getCountCash() const {
	return _cash;
};

void Dealer::setChip(int value) {
	_cash += value;
};
