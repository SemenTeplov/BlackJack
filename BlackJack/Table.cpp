#include "Table.hpp"

#include <iostream>

Table::Table() {
	init();
	int point = 0;

	while (run) {
		point = 0;
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
			run = false;
		}
		else if (number == 2) {
			Card* card = new Card(deck.getCard());
			hand->setCard(*card);
			vCard = new VisualCard(renderer,
				card->getSuit(),
				card->getValue(),
				false);
		}
		else if (number == 3) {
			Card* card = new Card(deck.getCard());
			dealer->setCard(*card);
			vCard = new VisualCard(renderer,
				card->getSuit(),
				card->getValue(),
				true);
		}

		if (vCard != nullptr) {
			vCard->visual();
		}

		for (int i = 0; i < dealer->getCountCards(); i++) {
			point += count(dealer->getCard(i));
		}

		if (point >= 17) {
			run = false;
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

cWhite Table::setWChip() {
	cWhite *chip = new cWhite();
	return *chip;
};
cRed Table::setRChip() {
	cRed *chip = new cRed();
	return *chip;
};
cGreen Table::setGChip() {
	cGreen *chip = new cGreen();
	return *chip;
};
cBlack Table::setBChip() {
	cBlack *chip = new cBlack();
	return *chip;
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
	dealer = new Dealer();
};

int Table::count(Card c) {
	int number = 0;

		if (c.getValue() == '6') {
			number += 6;
		}
		else if (c.getValue() == '7') {
			number += 7;
		}
		else if (c.getValue() == '8') {
			number += 8;
		}
		else if (c.getValue() == '9') {
			number += 9;
		}
		else if (c.getValue() == 'T' || c.getValue() == 'J' ||
			c.getValue() == 'Q' || c.getValue() == 'K') {
			number += 10;
		}
	return number;
};

bool Table::win() {
	int pointHand = 0;
	int pointDealer = 0;

	for (int i = 0; i < hand->getCountCards(); i++) {
		pointHand += count(hand->getCard(i));
	}

	if (pointHand == 21) {
		return true;
	}
	if (pointHand > 21) {
		return false;
	}

	for (int i = 0; i < dealer->getCountCards(); i++) {
		pointDealer += count(dealer->getCard(i));
	}

	if (pointDealer == 21) {
		return false;
	}
	if (pointHand > 21) {
		return true;
	}

	if ((pointDealer >= 17) && (pointDealer > pointHand)) {
		return false;
	}
	else if ((pointDealer >= 17) && (pointDealer <= pointHand)) {
		return true;
	}

};
