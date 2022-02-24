#include "Chip.hpp"

Chip::Chip(int choise) : _choise(choise) {
	if (_choise == 1) {
		_color = color.getWhite();
		_value = getVWhite();
	}
	else if (_choise == 2) {
		_color = color.getRed();
		_value = getVRed();
	}
	else if (_choise == 3) {
		_color = color.getGreen();
		_value = getVGreen();
	}
	else if (_choise == 4) {
		_color = color.getBlack();
		_value = getVBlack();
	}
};

std::string Chip::getColor() const {
	return _color;
};

int Chip::getValue() const {
	return _value;
};