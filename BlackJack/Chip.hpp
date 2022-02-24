#include "PrototypeChip.hpp"

#ifndef __CHIP__
#define __CHIP__

class Chip : PrototypeChip {
public:
	Chip(int choise);
	~Chip() {};

	std::string getColor() const;
	int getValue() const;

private:
	Color color;

	std::string _color;
	int _value;
	int _choise;
};

#endif //__CHIP__
