#ifndef __APPLICATION_H__
#define __APPLICATION_H__

#include "Globals.h"
#include "Module.h"

#define NUM_MODULES 2

class ModuleWindow;
class ModuleRender;

class Application
{
public:

	Module* modules[NUM_MODULES];
	ModuleWindow* win;
	ModuleRender* render;

public:

	Application();

	bool Init();
	update_status Update();
	bool CleanUp();

};

#endif // __APPLICATION_H__