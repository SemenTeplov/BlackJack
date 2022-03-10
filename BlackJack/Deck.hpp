#include <map>
#include <random>

#include "Card.hpp"
#include "Value.hpp"

#ifndef __DECK__
#define __DECK__

class Deck {
public:
	Deck();
	~Deck() {};

	template <typename suit>
	suit getSuit(int ind) {
		if (ind == 1) {
			return _heart;
		}
		else if (ind == 2) {
			return _dimond;
		}
		else if (ind == 3) {
			return _clubs;
		}
		else if (ind == 4) {
			return _peaks;
		}
	}

	template <typename value>
	value getValue(int ind) {
		if (ind == 1) {
			return _six;
		}
		else if (ind == 2) {
			return _seven;
		}
		else if (ind == 3) {
			return _eight;
		}
		else if (ind == 4) {
			return _nine;
		}
		else if (ind == 5) {
			return _ten;
		}
		else if (ind == 6) {
			return _jack;
		}
		else if (ind == 7) {
			return _queen;
		}
		else if (ind == 8) {
			return _king;
		}
	}

private:
	Heart *_heart = new Heart;
	Dimond *_dimond = new Dimond;
	Clubs *_clubs = new Clubs;
	Peaks *_peaks = new Peaks;

	Six *_six = new Six;
	Seven *_seven = new Seven;
	Eight *_eight = new Eight;
	Nine *_nine = new Nine;
	Ten *_ten = new Ten;
	Jack *_jack = new Jack;
	Queen *_queen = new Queen;
	King *_king = new King;
};

#endif //__DECK__
