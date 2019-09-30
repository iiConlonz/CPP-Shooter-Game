#include "Game.hpp"
#include <cstdlib>
#include <SDL.h>
#include "pch.h"
#include <iostream>

//Game::Game()
//{}
//Game::~Game()
//{}

void Game::init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen)
{
	int flags = 0;
	if (fullscreen) {
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) // Checks if SDL is launched
	{
		std::cout << "Subsystems Initialised..." << std::endl; // Outputs to console if it has

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags); // Creates a SDL window
		if (window)
		{
			std::cout << "Window Created" << std::endl; // Outputs to console confirming creation
		}

		renderer = SDL_CreateRenderer(window, -1, 0); // Creates a SDL renderer in the window
		if (renderer)
		{
			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
			std::cout << "Renderer Created" << std::endl; // Outputs to console confirming creation
		}

		isRunning = true; // Tells the program the SDL assets are running
	}
		else
		{
			isRunning = false; // Tells the program the SDL assets are not running
		}
}

void Game::gameEvents() // Manage events in the game
{
	SDL_Event event; // SDL event variable for managing game events
	SDL_PollEvent(&event); // Checks the event

	switch (event.type) // Takes the type of event into a switch statement
	{
	case SDL_QUIT: // If the SDL window is quit, tell the program it is not running
		isRunning = false;
		break;

	default:
		break;
	}
}

void Game::gameUpdate() // Manages updates within the game
{

}

void Game::gameRender() // Manages what the game renders
{
	SDL_RenderClear(renderer); // Clears the SDL renderer from previous runs

	// This is where I will add what is ot be rendered

	SDL_RenderPresent(renderer);
}

void Game::gameClean() // Manages cleaning/optimisation for the program
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	std::cout << "Program Cleaned";
}