#include <string>

#ifndef __SUIT__
#define __SUIT__

class Suit {
public:
	Suit() {};
	~Suit() {};

	std::string getHeart();
	std::string getDimond();
	std::string getClubs();
	std::string getPeaks();

private:
	std::string _herat = "heart";
	std::string _dimond = "dimond";
	std::string _clubs = "clubs";
	std::string _peaks = "peaks";
};

#endif //__SUIT__
