#ifndef _MODULE_RENDER_H_
#define _MODULE_RENDER_H_

class ModuleRender : public Module{

public:
	SDL_Renderer* render;

public:
	bool Init();

	update_status PreUpdate();
	update_status Update();
	update_status PostUpdate();

	bool CleanUp();

};

#endif