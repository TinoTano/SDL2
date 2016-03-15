#ifndef __ModuleWindow_H__
#define __ModuleWindow_H__

// TODO 1: Create the declaration of ModuleWindow class

class ModuleWindow : public Module{

public:
	SDL_Window* window;
	SDL_Surface* w_surface;

public:
	bool Init();

	bool CleanUp();

};

#endif // __ModuleWindow_H__