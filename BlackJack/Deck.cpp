#include <iostream>
#include "Deck.hpp"

Deck::Deck() {
	for (int s = 1; s < 5; s++) {
		for (int v = 1; v < 10; v++) {
			card = new Card(v, s);
			_deck.push_back(*card);
		}
	}
};

int Deck::randomNumber() {
	std::random_device engine;
	std::mt19937 gen(engine());
	std::uniform_int_distribution<int> dist(1, 36);

	return dist(gen);
};

Card Deck::getCard() {
	indFirstCard = randomNumber() - 1;
	Card tamCard = _deck.at(indFirstCard);
	_deck.erase(_deck.begin() + indFirstCard);

	return tamCard;
};

int Deck::getSize() {
	return _deck.size();
};