#include <string>

#ifndef __SUIT__
#define __SUIT__

//--------------------------------------------------

class Suit {
public:
	Suit() {};
	virtual ~Suit() {};

	std::string virtual getSuit() const {
		return _suit;
	};

private:
	std::string _suit;
};

//--------------------------------------------------

class Heart : public Suit {
public:
	Heart() {};
	~Heart() {};

	std::string getSuit() const {
		return _suit;
	};

private:
	std::string _suit = "heart";
};

//--------------------------------------------------

class Dimond : public Suit {
public:
	Dimond() {};
	~Dimond() {};

	std::string getSuit() const {
		return _suit;
	};

private:
	std::string _suit = "dimond";
};

//--------------------------------------------------

class Clubs : public Suit {
public:
	Clubs() {};
	~Clubs() {};

	std::string getSuit() const {
		return _suit;
	};

private:
	std::string _suit = "clubs";
};

//--------------------------------------------------

class Peaks : public Suit {
public:
	Peaks() {};
	~Peaks() {};

	std::string getSuit() const {
		return _suit;
	};

private:
	std::string _suit = "peaks";
};

//--------------------------------------------------

#endif //__SUIT__
