//Coresponding Header
#include "manager_utils/managers/DrawMgr.h"
//C system includes

//C++ system includes
#include<iostream>
#include<cstdint>
//3rd-party includes

//Own includes
#include "manager_utils/config/DrawMgrCfg.h"


DrawMgr *gDrawMgr = nullptr;

int32_t DrawMgr::init(const DrawMgrCfg& cfg){
	if (EXIT_SUCCESS != _window.init(cfg.windowCfg)){		//load the size of the window
			std::cerr << "loadResources() failed. Reason: " << std::endl;
			return EXIT_FAILURE;
	}

	if (EXIT_SUCCESS != _renderer.init(_window.getWindow())){		//get the render algorithm
			std::cerr << "render init() failed. Reason: " << std::endl;
			return EXIT_FAILURE;
	}

return EXIT_SUCCESS;
}


void DrawMgr::deinit() {

	_renderer.deinit();
	_window.deinit();

}

void DrawMgr::process(){
//empty
}



void DrawMgr::clearScreen(){
	_renderer.clearScreen();	//always start drawing the frame with clearing the screen
}

void DrawMgr::finishFrame(){
	_renderer.finishFrame();
}

void DrawMgr::addDrawCmd(const DrawParams& drawParams, SDL_Texture* texture){
	_renderer.renderTexture(texture,drawParams);
}


