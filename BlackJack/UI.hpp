#include "Texture.hpp"

#ifndef __UI__
#define __UI__

class UI {
public:
	UI(SDL_Renderer *renderer);
	~UI() {};

	void getMenu(int posX, int posY, bool left);

private:
	class Button {
	public:
		Button(SDL_Renderer *_renderer, 
			const char *path, 
			int posX,
			int posY, 
			int width, 
			int hight);
		~Button();

		void visual();

	private:
		SDL_Renderer *__renderer;
		SDL_Texture *__texture;
		SDL_Rect __src;
		SDL_Rect __dest;

		Texture *texture;
	};

	SDL_Renderer *_renderer;

	Button *buttonMenu;
	Button *buttonMenuPoint;
	Button *buttonMenuAction;
	Button *buttonCard;
	Button *buttonCardPoint;
	Button *buttonCardAction;
	Button *buttonEnough;
	Button *buttonEnoughPoint;
	Button *buttonEnoughAction;
};

#endif //__UI__
