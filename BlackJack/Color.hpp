#include <string>

#ifndef __COLOR__
#define __COLOR__

class Color {
public:
	Color() {};
	virtual ~Color() {};

	std::string virtual getColor() const {
		return _color;
	};
	
	int virtual getValue() const {
		return _value;
	};

private:
	std::string _color = "color";
	int _value = 0;
};

#endif //__COLOR__
