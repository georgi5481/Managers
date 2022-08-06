//Corresponding header
#include "Engine/Engine.h"

//C headers

//C++ headers
#include<iostream>

//own includes
#include "Engine/config/EngineConfig.h"
#include "manager_utils/managers/DrawMgr.h"

#include "utils/thread/ThreadUtils.h"
#include "utils/Time/Time.h"

#include "sdl_utils/Texture.h"
#include "utils/drawings/Color.h"



int32_t Engine::init(const EngineConfig& cfg){

	gDrawMgr = new DrawMgr();

	if(gDrawMgr == nullptr) {
		std::cerr << "Error, bad alloc for DrawMgr" << std::endl;
			return EXIT_FAILURE;
	}
	if (EXIT_SUCCESS != gDrawMgr->init(cfg.drawMgrCfg)){
			std::cerr << "gDrawMgr init() failed. Reason: " << std::endl;
			return EXIT_FAILURE;
	}

	if (EXIT_SUCCESS != _imgContainer.init(cfg.imageContainerCfg)){		//initialising the image container logic (a simple map  with int as ID and string as the path)
			std::cerr << "imgContainer init() failed. Reason: " << std::endl;
			return EXIT_FAILURE;
	}

	if (EXIT_SUCCESS != _textContainer.init(cfg.textContainerCfg)){		//initialising the image container logic (a simple map  with int as ID and string as the path)
			std::cerr << "textContainer init() failed. Reason: " << std::endl;
			return EXIT_FAILURE;
	}

	if (EXIT_SUCCESS != _event.init()){			//scan what event occurred
			std::cerr << "InputEvent failed. Reason: " << std::endl;
			return EXIT_FAILURE;
	}

	if (EXIT_SUCCESS != _game.init(cfg.gameCfg, &_imgContainer,&_textContainer)){	//load the resources in the window
			std::cerr << "_game.init() failed." << std::endl;
			return EXIT_FAILURE;
	}


return EXIT_SUCCESS;
}




void Engine::deinit(){	//always deinitialise backwards according to initialisings
	_game.deinit();
	_event.deinit();
	_imgContainer.deinit();
	_textContainer.deinit();


	gDrawMgr->deinit();
	delete gDrawMgr;
	gDrawMgr = nullptr;
}

void Engine::start(){
	mainLoop();
}

void Engine::mainLoop(){
	Time time;

while(true){
	time.getElapsed().toMicroseconds();

	const bool shouldExit = processFrame();

		if(shouldExit){
			break;
		}

		limitFPS(time.getElapsed().toMicroseconds());
	}
}

void Engine::drawFrame(){

	gDrawMgr->clearScreen();	//first clear the screen

	std::vector<DrawParams> images;

	_game.draw(images);


	SDL_Texture* texture = nullptr;

	for(const DrawParams& image : images){	//will basically print out all images we contained in the map with our flyweight pattern

		if(WidgetType::IMAGE == image.widgetType){
			texture = _imgContainer.getImageTexture(image.rsrcId);
		}
		else if(WidgetType::TEXT == image.widgetType){
			texture = _textContainer.getTextTexture(image.textId);
		}
		else{
			std::cerr << "Error, received unsupported widgetType : " << static_cast<int32_t>(image.widgetType)
									<< " for rsrcId : " << image.rsrcId << std::endl;
			continue;
		}
		gDrawMgr->addDrawCmd(image, texture);
	}
	gDrawMgr->finishFrame();
}



bool Engine::processFrame(){
	while(_event.pollEvent()){
		if(_event.checkForExitRequiest()){
			return true;
		}

		handleEvent();
	}

	drawFrame();

	return false;
}

void Engine::handleEvent(){
_game.handleEvent(_event);
}

void Engine::limitFPS(int64_t elapsedTimeMicroSeconds){
	constexpr auto maxFrames = 30;
	constexpr auto microSecondsInASecond = 1000000;
	constexpr auto microSecondsPerFrame = microSecondsInASecond / maxFrames;
	const int64_t sleepDurationMicroSeconds = microSecondsPerFrame - elapsedTimeMicroSeconds;

	if(sleepDurationMicroSeconds > 0){
	ThreadUtils::sleepFor(sleepDurationMicroSeconds);
	}
}






