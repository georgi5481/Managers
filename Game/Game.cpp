//Corresponding header3
#include "Game/Game.h"
//C system includes

//C++ system includes
#include<cstdint>
#include<iostream>
//3rd-party includes


//Own components includes
#include "sdl_utils/config/MonitorWindowCfg.h"

#include "sdl_utils/InputEvent.h"
#include "utils/drawings/Color.h"

#include "manager_utils/managers/RsrcMgr.h"
#include "manager_utils/managers/DrawMgr.h"
//#include "utils/drawings/DrawParams.h"

//for demonstration
static int32_t gFontId;

int32_t Game::init(const GameCfg& cfg){

	layer2Img.rsrcId = cfg.layer2RsrcId;
	Rectangle rect = gRsrcMgr->getImageFrame(layer2Img.rsrcId);
	layer2Img.width = rect.h;
	layer2Img.height = rect.h;
	layer2Img.pos = Point::ZERO;
	layer2Img.widgetType = WidgetType::IMAGE;

	pressKeysImg.rsrcId =cfg.pressKeysRsrcId;
	rect = gRsrcMgr->getImageFrame(pressKeysImg.rsrcId);
	pressKeysImg.width = rect.w;
	pressKeysImg.height = rect.h;
	pressKeysImg.pos = Point::ZERO;
	pressKeysImg.pos.y += 20;
	pressKeysImg.widgetType = WidgetType::IMAGE;


	gRsrcMgr->createText( "Hello,  C++ dudes", Colors::GREEN, cfg.textFontId,
			helloText.textId, helloText.width, helloText.height);
	helloText.pos = Point::ZERO;
	helloText.widgetType = WidgetType::TEXT;


	gRsrcMgr->createText( "Press M to hide", Colors::GREEN, cfg.textFontId,
			pressText.textId, pressText.width, pressText.height);
	pressText.pos = Point::ZERO;
	pressText.pos.x += 100;
	pressText.pos.y += 100;
	pressText.widgetType = WidgetType::TEXT;


	gRsrcMgr->createText( "Press N to show", Colors::CYAN, cfg.textFontId,
			hideText.textId, hideText.width, hideText.height);
	hideText.pos = Point::ZERO;
	hideText.pos.x += 300;
	hideText.pos.y += 300;
	hideText.widgetType = WidgetType::TEXT;

	return EXIT_SUCCESS;
}

void Game::deinit(){
	gRsrcMgr->unloadText(helloText.textId);
}

void Game::draw(){
	gDrawMgr->addDrawCmd(helloText);

	if(isPressTextHidden) {
		gDrawMgr->addDrawCmd(hideText);
	}
	else{
		gDrawMgr->addDrawCmd(pressText);
	}

}

void Game::handleEvent([[maybe_unused]]const InputEvent& e){
	if(TouchEvent::KEYBOARD_RELEASE != e.type){	//will basically detect only when you realease a key.
		return;
	}

		switch(e.key){
		//MOVEMENT
		case Keyboard::KEY_UP:
		pressKeysImg.pos.y -= 10;
		break;

		case Keyboard::KEY_DOWN:
		pressKeysImg.pos.y += 10;
		break;

		case Keyboard::KEY_LEFT:
		pressKeysImg.pos.x -= 10;
		break;

		case Keyboard::KEY_RIGHT:
		pressKeysImg.pos.x += 10;
		break;


		//STRETCHING
		case Keyboard::KEY_A:
		pressKeysImg.width -= 10;
		break;
		case Keyboard::KEY_D:
		pressKeysImg.width += 10;
		break;
		case Keyboard::KEY_S:
		pressKeysImg.height -= 10;
		break;
		case Keyboard::KEY_W:
		pressKeysImg.height += 10;
		break;

		//OPACITY
		case Keyboard::KEY_E:
		pressKeysImg.opacity -= 10;
		break;
		case Keyboard::KEY_Q:
		pressKeysImg.opacity += 10;
		break;


		case Keyboard::KEY_B:
			gRsrcMgr->reloadText( "Stana li ?", Colors::PURPLE, gFontId, helloText.textId, helloText.width, helloText.height);
		break;


		case Keyboard::KEY_M:
			isPressTextHidden = true;
		break;
		case Keyboard::KEY_N:
			isPressTextHidden = false;
		break;


		default:
			break;
		}
}


