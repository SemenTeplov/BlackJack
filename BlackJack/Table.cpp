#include "Table.hpp"

#include <iostream>

Table::Table() {
	init();

	while (run) {
		SDL_GetMouseState(&posMouseX, &posMouseY);
		click = false;

		while (SDL_PollEvent(&event) != 0) {
			if (event.type == SDL_QUIT) {
				run = false;
			}
			if (event.type == SDL_MOUSEBUTTONDOWN) {
				if (event.button.button == SDL_BUTTON_LEFT) {
					click = true;
				}
				else {
					click = false;
				}
			}
			else {
				click = false;
			}
		}


		SDL_RenderClear(renderer);
		SDL_RenderCopy(renderer, tTable, NULL, NULL);
		number = ui->getMenu(posMouseX, posMouseY, click);

		if (number == 1) {

		}
		else if (number == 2) {
			Card* card = new Card(deck.getCard());
			hand->setCard(*card);
			vCard = new VisualCard(renderer,
				card->getSuit(),
				card->getValue());
		}
		else if (number == 3) {

		}

		if (vCard != nullptr) {
			vCard->visual();
		}

		SDL_RenderPresent(renderer);
	}
};

Table::~Table() { 
	SDL_DestroyTexture(tTable);
	tTable = NULL;
	SDL_DestroyRenderer(renderer);
	renderer = NULL;
	SDL_DestroyWindow(window);
    window = NULL;

	delete table;
	delete ui;
};

void Table::init() {
	SDL_Init(SDL_INIT_EVERYTHING);

	window = SDL_CreateWindow("SDL Tutorial",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		SCREEN_WIDTH,
		SCREEN_HEIGHT,
		SDL_WINDOW_SHOWN);

	screenSurface = SDL_GetWindowSurface(window);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	table = new Texture(renderer, "res/TableBlaxkjack.png");
	tTable = table->getTexture();
	ui = new UI(renderer);
	hand = new Hand();
};
