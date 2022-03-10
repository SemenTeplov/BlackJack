#include <SDL.h>
#include <SDL_Image.h>

#include "Texture.hpp"
#include "UI.hpp"
#include "Hand.hpp"
#include "Dealer.hpp"
#include "Card.hpp"
#include "Deck.hpp"
#include "Card.hpp"
#include "visualCard.hpp"
#include "cWhite.hpp"
#include "cRed.hpp"
#include "cGreen.hpp"
#include "cBlack.hpp"

#ifndef __TABLE__
#define __TABLE__

class Table {
public:
	Table();
	~Table();

	cWhite setWChip() {}; // нужна визуализация
	cRed setRChip() {}; // нужна визуализация
	cGreen setGChip() {}; // нужна визуализация
	cBlack setBChip() {}; // нужна визуализация

	template<typename type>
	int getChip(type chip) {
		return chip.getValue();
	};

private:
	const int SCREEN_WIDTH = 1280;
	const int SCREEN_HEIGHT = 1024;

	bool run = true;
	bool click = false;
	int posMouseX = 0;
	int posMouseY = 0;
	int number = 0;

	SDL_Window *window = NULL;
	SDL_Surface *screenSurface = NULL;
	SDL_Texture *tTable = NULL;
	SDL_Renderer *renderer = NULL;
	SDL_Event event;

	Texture *table;
	UI *ui;
	Deck *deck;
	VisualCard *vCard;
	Hand *hand;
	Dealer *dealer;

	bool win();

	void init();

	int randomSuit() {
		std::random_device engine;
		std::mt19937 gen(engine());
		std::uniform_int_distribution<int> dist(1, 5);
		
		return dist(gen);
	};

	int randomValue() {
		std::random_device engine;
		std::mt19937 gen(engine());
		std::uniform_int_distribution<int> dist(1, 9);

		return dist(gen);
	};
};

#endif //__TABLE__
