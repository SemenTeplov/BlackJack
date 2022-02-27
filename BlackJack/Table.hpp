#include <SDL.h>
#include <SDL_Image.h>

#include "Hand.hpp"
#include "Dealer.hpp"

#ifndef __TABLE__
#define __TABLE__

class Table {
public:
	Table();
	~Table();

private:
	const int SCREEN_WIDTH = 1280;
	const int SCREEN_HEIGHT = 1024;

	SDL_Window *window = NULL;
	SDL_Surface *screenSurface = NULL;

	void visual();

};

#endif //__TABLE__
