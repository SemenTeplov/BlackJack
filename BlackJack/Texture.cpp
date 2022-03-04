#include "Texture.hpp"

Texture::Texture(SDL_Renderer *renderer, const char *path) :
	_renderer(renderer) {
	_surface = IMG_Load(path);
	_texture = SDL_CreateTextureFromSurface(_renderer, _surface);
	SDL_FreeSurface(_surface);
};

SDL_Texture *Texture::getTexture() {
	return _texture;
};