#include <SDL2/SDL.h>
#include <iostream>
#include "Position_SourisClicGauche.h"

using namespace std;

int main()
{
	int x, y;
	SDL_bool quit = SDL_FALSE;
	
	if (SDL_Init(SDL_INIT_EVENTS) != 0)
	{
		cout << "Erreur de lancement SDL\n";
	}
	
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		cout <<"Erreur de lancement SDL\n";
	}

	SDL_Window* pWindow = NULL;
	
	pWindow = SDL_CreateWindow("Ma première appli SDL2", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640,480, SDL_WINDOW_SHOWN);
	
	
	Position_SourisClicGauche(&x, &y, quit);
	
	SDL_Quit();
	return 0;
}
