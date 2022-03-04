#include "UI.hpp"

UI::UI(SDL_Renderer* renderer) : _renderer(renderer) {
	buttonMenu = new Button(_renderer, "res/Menu.png", 400, 900, 150, 100);
	buttonMenuPoint = new Button(_renderer, "res/MenuPoint.png", 400, 900, 150, 100);
	buttonMenuAction = new Button(_renderer, "res/MenuAction.png", 400, 900, 150, 100);
	buttonCard = new Button(_renderer, "res/Card.png", 600, 900, 150, 100);
	buttonCardPoint = new Button(_renderer, "res/CardPoint.png", 600, 900, 150, 100);
	buttonCardAction = new Button(_renderer, "res/CardAction.png", 600, 900, 150, 100);
	buttonEnough = new Button(_renderer, "res/enough.png", 800, 900, 150, 100);
	buttonEnoughPoint = new Button(_renderer, "res/enoughPoint.png", 800, 900, 150, 100);
	buttonEnoughAction = new Button(_renderer, "res/enoughAction.png", 800, 900, 150, 100);
};

UI::Button::Button(SDL_Renderer *_renderer, 
	const char *path, 
	int posX,
	int posY,
	int width,
	int hight) :
	__renderer(_renderer) {
	texture = new Texture(_renderer, path);

	__texture = texture->getTexture();

	__src.x = 0;
	__src.y = 0;
	__src.w = 16;
	__src.h = 16;

	__dest.x = posX;
	__dest.y = posY;
	__dest.w = width;
	__dest.h = hight;
};

void UI::getMenu(int posX, int posY, bool left) {
	if (((posX >= 400) && (posX <= 550)) && 
		((posY >= 900) && (posX <= 1000)) &&
		(left == false)) {
		buttonMenuPoint->visual();
	}
	else if (((posX >= 400) && (posX <= 550)) &&
		((posY >= 900) && (posX <= 1000)) &&
		(left == true)) {
		buttonMenuAction->visual();
	}
	else {
		buttonMenu->visual();
	}

	if (((posX >= 600) && (posX <= 750)) &&
		((posY >= 900) && (posX <= 1000)) &&
		(left == false)) {
		buttonCardPoint->visual();
	}
	else if (((posX >= 600) && (posX <= 750)) &&
		((posY >= 900) && (posX <= 1000)) &&
		(left == true)) {
		buttonCardAction->visual();
	}
	else {
		buttonCard->visual();
	}

	if (((posX >= 800) && (posX <= 950)) &&
		((posY >= 900) && (posX <= 1000)) &&
		(left == false)) {
		buttonEnoughPoint->visual();
	}
	else if (((posX >= 800) && (posX <= 950)) &&
		((posY >= 900) && (posX <= 1000)) &&
		(left == true)) {
		buttonEnoughAction->visual();
	}
	else {
		buttonEnough->visual();
	}
};

UI::Button::~Button() {
	SDL_DestroyRenderer(__renderer);
	SDL_DestroyTexture(__texture);
	delete texture;
};

void UI::Button::visual() {
	SDL_RenderCopy(__renderer, __texture, NULL, &__dest);
};