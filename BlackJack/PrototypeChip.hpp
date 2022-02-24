#include "Color.hpp"

#ifndef __PROTOTYPECHIP__
#define __PROTOTYPECHIP__

class PrototypeChip {
public:
	PrototypeChip() {};
	~PrototypeChip() {};

	int getVWhite();
	int getVRed();
	int getVGreen();
	int getVBlack();

private:
	int _valueWhite = 1;
	int _valueRed = 5;
	int _valueGreen = 25;
	int _valueBlack = 100;
};

#endif //__PROTOTYPECHIP__
