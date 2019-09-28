// C++ 2D Shooter Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <SDL.h>

int main(int argc, char *argv[])
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		std::cout << "SDL could not initialise! SDL Error: " << SDL_GetError() << std::endl;
	}
	
	return EXIT_SUCCESS;
}

