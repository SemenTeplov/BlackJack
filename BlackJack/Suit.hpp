#include <string>

#ifndef __SUIT__
#define __SUIT__

class Suit {
public:
	Suit() {};
	~Suit() {};

	std::string getHeart() {};
	std::string getDimond() {};
	std::string getClubs() {};
	std::string getPeaks() {};

private:
	std::string herat = "heart";
	std::string dimond = "dimond";
	std::string clubs = "clubs";
	std::string peaks = "peaks";
};

#endif //__SUIT__
