#include "Globals.h"
#include "Application.h"
#include "ModuleWindow.h"


bool ModuleWindow::Init(){
	// TODO 2: Init the library and check for possible error
	// using SDL_GetError()

	LOG("ModuleWindow Init\n");
	SDL_Init(SDL_INIT_EVERYTHING);
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		// Unrecoverable error, exit here.
		LOG("SDL_Init failed: %s\n", SDL_GetError());
		return false;
	}
	else {
		printf("Everything is correct!");
	}

	// TODO 3: pick the width and height and experiment with flags: borderless / fullscreen / resizable,
	// then create the window and check for errors

	window = SDL_CreateWindow("Super Awesome Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, BORDERLESS);
	if (window == NULL) {
		// In the case that the window could not be made...
		LOG("Could not create window: %s\n", SDL_GetError());
		return false;
	}

	// TODO 4: Finally create a screen surface and keep it as a public variable

	w_surface = SDL_GetWindowSurface(window);
	SDL_UpdateWindowSurface(window);

	

	return true;
}

bool ModuleWindow::CleanUp(){
	LOG("ModuleWindow CleanUp\n");

	// TODO 5: Fill with code CleanUp() method :)

	SDL_DestroyWindow(window);

	return true;
}





