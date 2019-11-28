#include <SDL2/SDL.h>
#include <iostream>
#include "Position_SourisClicGauche.h"

using namespace std;

void Position_SourisClicGauche(int* X, int* Y, SDL_bool quit)
{
	SDL_Event event;
	
	while (!quit)
	{
		SDL_WaitEvent(&event);
		if (event.type == SDL_QUIT)
		{
			quit = SDL_TRUE;
		}

		else if (event.type == SDL_MOUSEMOTION && (event.motion.state & SDL_BUTTON_LEFT))
		{
			*X = event.motion.x;
			*Y = event.motion.y;
			cout << "La souris bouge et sa postition est (" << *X << "," << *Y <<")\n";
		}
	}
}
