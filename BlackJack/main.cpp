#include <iostream>

#include "Deck.hpp"

int main() {

	Deck deck;

	std::cout << deck.getSize() << std::endl;

	Card card = deck.getCard();
	std::cout << card.getValue() << ' ' << card.getSuit() << std::endl;
	std::cout << deck.getSize() << std::endl;

	for (auto c : deck._deck) {
		std::cout << c.getValue() << ' ' << c.getSuit() << std::endl;
	}

	return 0;
}