#include <SDL.h>
#include <stdlib.h>
#include <iostream>

class Game {

public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

	void gameEvents();
	void gameUpdate();
	void screenRender();
	void programClean();

	bool running() { return isRunning };

private:
	bool isRunning;
	SDL_Window *window;
	SDL_Renderer *renderer;
};
