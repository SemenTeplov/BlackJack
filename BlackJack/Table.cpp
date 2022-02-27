#include "Table.hpp"

Table::Table() { visual(); };

Table::~Table() { SDL_DestroyWindow(window); };

void Table::visual() {
	SDL_Init(SDL_INIT_EVERYTHING);

	window = SDL_CreateWindow("SDL Tutorial", 
		SDL_WINDOWPOS_UNDEFINED, 
		SDL_WINDOWPOS_UNDEFINED, 
		SCREEN_WIDTH, 
		SCREEN_HEIGHT, 
		SDL_WINDOW_SHOWN);

	screenSurface = SDL_GetWindowSurface(window);

	SDL_FillRect(screenSurface, 
		NULL, 
		SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

	SDL_UpdateWindowSurface(window);

	SDL_Delay(2000);

	SDL_Quit();
};