#include "Color.hpp"

#ifndef __CWHITE__
#define __CWHITE__

class cWhite : public Color {
public:
	cWhite() {};
	~cWhite() {};

	std::string getColor() const {
		return _color;
	};

	int virtual getValue() const {
		return _value;
	};

private:
	std::string _color = "white";
	int _value = 1;
};

#endif //__CWHITE__
