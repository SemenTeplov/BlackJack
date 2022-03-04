#include "Texture.hpp"
#include "Card.hpp"

#ifndef __VISUALCARD__
#define __VISUALCARD__

class VisualCard {
public:
	VisualCard(SDL_Renderer *renderer, std::string suit, char value, bool dealer);
	~VisualCard() ;

	void visual();

private:
	SDL_Renderer *_renderer = NULL;
	SDL_Texture *_texture = NULL;
	SDL_Rect _src;
	SDL_Rect _dest;

	Texture *texture;

	std::string _suit;
	char _value;

	int srcX = 15;
	int srcY = 15;
	int destX = 593;
	int destY = 649;
};

#endif //__VISUALCARD__
