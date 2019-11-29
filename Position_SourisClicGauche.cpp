#include <SDL2/SDL.h>
#include <iostream>
#include "Position_SourisClicGauche.h"

using namespace std;

void Position_SourisClicGauche(int* X, int* Y, SDL_bool quit)
{
	SDL_Event event;
	
	while (!quit)/* Tant qu'on ne ferme pas la fenêtre*/
	{
		SDL_WaitEvent(&event); /*on attend qu'un event se produise*/
		if (event.type == SDL_QUIT)/*si on ferme la fenêtre, on quitte*/
		{
			quit = SDL_TRUE;
		}

		else if (event.type == SDL_MOUSEMOTION && (event.motion.state & SDL_BUTTON_LEFT)) /* Si l'evenement est de type "la souris bouge" et qu'on bouge la souris et que le clic gauche est enfoncé*/
		{
			*X = event.motion.x;
			*Y = event.motion.y;
			cout << "La souris bouge et sa postition est (" << *X << "," << *Y <<")\n"; /*on récupère la position de la souris*/
		}
	}
}
