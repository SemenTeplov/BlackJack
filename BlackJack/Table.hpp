#include <SDL.h>
#include <SDL_Image.h>

#include "Texture.hpp"
#include "UI.hpp"
#include "Hand.hpp"
#include "Dealer.hpp"
#include "Card.hpp"
#include "Deck.hpp"
#include "visualCard.hpp"

#ifndef __TABLE__
#define __TABLE__

class Table {
public:
	Table();
	~Table();

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
	Deck deck;
	VisualCard *vCard;
	Hand *hand;


	void init();


};

#endif //__TABLE__
