#include "visualCard.hpp"
#include <iostream>

VisualCard::VisualCard(SDL_Renderer* renderer, std::string suit, char value, bool dealer) :
	_renderer(renderer), _suit(suit), _value(value) {
	texture = new Texture(_renderer, "res/cards.png");
	_texture = texture->getTexture();

	std::cout << _suit << ' ' << _value << std::endl;

	_src.x = srcX;
	_src.y = srcY;
	_src.w = 180;
	_src.h = 240;

	_dest.x = destX;
	if (dealer) {
		_dest.y = destY - 349;
	}
	else {
		_dest.y = destY;
	}
	_dest.w = 100;
	_dest.h = 150;

	if (_value == '7') {
		_src.x = 15 + 210;
	}
	else if (_value == '8') {
		_src.x = 15 + 420;
	}
	else if (_value == '9') {
		_src.x = 15 + 630;
	}
	else if (_value == 'T') {
		_src.x = 15 + 840;
	}
	else if (_value == 'J') {
		_src.x = 15 + 1050;
	}
	else if (_value == 'Q') {
		_src.x = 15 + 1260;
	}
	else if (_value == 'K') {
		_src.x = 15 + 1470;
	}
	if (_suit == "peaks") {
		_src.y = 15 + 275;
	}
	else if (_suit == "dimond") {
		_src.y = 15 + 560;
	}
	else if (_suit == "heart") {
		_src.y = 15 + 840;
	}

};

VisualCard::~VisualCard() {
	SDL_DestroyTexture(_texture);
	_texture = NULL;
	SDL_DestroyRenderer(_renderer);
	_renderer = NULL;
};

void VisualCard::visual() {
	SDL_RenderCopy(_renderer, _texture, &_src, &_dest);
};