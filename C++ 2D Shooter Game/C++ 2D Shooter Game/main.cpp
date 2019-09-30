#include "Game.hpp"
#include <stdio.h>
#include <SDL.h>
#include <iostream>
#include "pch.h"

Game *game = nullptr;

int main(int argc, const char * argv[]) 
{
	
	game = new Game();

	while (game->running())
	{
		game->gameEvents();
		game->gameUpdate();
		game->gameRender();
	}

	game->gameClean();

	return 0;
}