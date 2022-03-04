#include <SDL.h>
#include <SDL_Image.h>

#ifndef __TEXTURE__
#define __TEXTURE__

class Texture {
public:
	Texture(SDL_Renderer *renderer, const char *path);
	~Texture();

	SDL_Texture *getTexture();

private:
	SDL_Renderer *_renderer;
	SDL_Surface *_surface;
	SDL_Texture *_texture;
};

#endif //__TEXTURE__
