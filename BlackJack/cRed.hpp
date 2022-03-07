#include "Color.hpp"

#ifndef __CRED__
#define __CRED__

class cRed : public Color {
public:
	cRed() {};
	~cRed() {};

	std::string getColor() const {
		return _color;
	};

	int virtual getValue() const {
		return _value;
	};

private:
	std::string _color = "red";
	int _value = 5;
};

#endif //__CRED__
