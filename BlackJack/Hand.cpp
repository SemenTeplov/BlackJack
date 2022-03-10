#include "Hand.hpp"

void Hand::setCount(int count) {
	_count += count;
};

int Hand::getCount() const {
	return _count;
};

int Hand::getCountCash() const {
	return _cash;
};

void Hand::setChip(int value) {
	_cash += value;
};