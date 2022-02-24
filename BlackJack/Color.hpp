#include <string>

#ifndef __COLOR__
#define __COLOR__

class Color {
public:
	Color() {};
	~Color() {};

	std::string getWhite() const;
	std::string getRed() const;
	std::string getGreen() const;
	std::string getBlack() const;

private:
	std::string _white = "white";
	std::string _red = "red";
	std::string _green = "green";
	std::string _black = "black";
};

#endif //__COLOR__
