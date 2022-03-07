#include "Color.hpp"

#ifndef __CGREEN__
#define __CGREEN__

class cGreen : public Color {
public:
	cGreen() {};
	~cGreen() {};

	std::string getColor() const {
		return _color;
	};

	int virtual getValue() const {
		return _value;
	};

private:
	std::string _color = "green";
	int _value = 25;
};

#endif //__CGREEN__
