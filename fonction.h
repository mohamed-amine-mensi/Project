#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_fonction.h>

struct minimap
{
	SDL_Surface* mini_map;
	SDL_Rect pos_minimap;
	SDL_Surface* mini_hero;
	SDL_Rect pos_minihero;
	
	
};
typedef struct minimap minimap; 


void initminimap( minimap * m);
void MAJMinimap(perso p , minimap * m, SDL_Rect camera, int redimensionnement);
void afficherminimap (minimap m, SDL_Surface * screen);
void Liberer (minimap *m,/*text *t*/);

#endif
