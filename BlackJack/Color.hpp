#include <string>

#ifndef __COLOR__
#define __COLOR__

class Color {
public:
	Color() {};
	~Color() {};

	std::string getWhite();
	std::string getRed();
	std::string getGreen();
	std::string getBlack();

private:
	std::string _white = "white";
	std::string _red = "red";
	std::string _green = "green";
	std::string _black = "black";
};

#endif //__COLOR__
