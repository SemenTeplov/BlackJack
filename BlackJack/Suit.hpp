#include <string>

#ifndef __SUIT__
#define __SUIT__

class Suit {
public:
	Suit() {};
	~Suit() {};

	std::string getHeart() const;
	std::string getDimond() const;
	std::string getClubs() const;
	std::string getPeaks() const;

private:
	std::string _herat = "heart";
	std::string _dimond = "dimond";
	std::string _clubs = "clubs";
	std::string _peaks = "peaks";
};

#endif //__SUIT__
