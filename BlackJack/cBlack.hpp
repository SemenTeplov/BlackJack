#include "Color.hpp"

#ifndef __CBLACK__
#define __CBLACK__

class cBlack : public Color {
public:
	cBlack() {};
	~cBlack() {};

	std::string getColor() const {
		return _color;
	};

	int virtual getValue() const {
		return _value;
	};

private:
	std::string _color = "black";
	int _value = 100;
};

#endif //__CBLACK__

