#include <SDL.h>
#include <stdio.h>
#include <iostream>
#include "pch.h"

class Game {

public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

	void gameEvents();
	void gameUpdate();
	void gameRender();
	void gameClean();

	bool running() { return isRunning; };

private:
	bool isRunning;
	SDL_Window *window;
	SDL_Renderer *renderer;
};
