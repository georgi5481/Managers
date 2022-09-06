//Corresponding header3
#include "Game/Game.h"
//C system includes

//C++ system includes
#include<cstdint>
#include<iostream>
//3rd-party includes


//Own components includes
//#include "sdl_utils/config/MonitorWindowCfg.h"
#include "sdl_utils/InputEvent.h"

int32_t Game::init(const GameCfg& cfg){

	layer2Img.create(cfg.layer2RsrcId);
	pressKeysImg.create(cfg.pressKeysRsrcId);
	pressKeysImg.activateAlphaModulation();

	helloText.create("Hello,  C++ dudes",cfg.textFontId, Colors::GREEN);
	pressText.create("Press M to hide.",cfg.textFontId, Colors::GREEN);
	hideText.create("Press N to show.",cfg.textFontId, Colors::PURPLE,
				Point(200,200));

	return EXIT_SUCCESS;
}

void Game::deinit(){

}

void Game::draw(){
	pressKeysImg.draw();
	helloText.draw();

	if(isPressTextHidden) {

		hideText.draw();
	}
	else{
		pressText.draw();
	}

}

void Game::handleEvent([[maybe_unused]]const InputEvent& e){
	if(TouchEvent::KEYBOARD_RELEASE != e.type){	//will basically detect only when you realease a key.
		return;
	}

		switch(e.key){
		//MOVEMENT with arrow keys
		case Keyboard::KEY_UP:
			pressKeysImg.moveUp(10);
		break;

		case Keyboard::KEY_DOWN:
			pressKeysImg.moveDown(10);
		break;

		case Keyboard::KEY_LEFT:
		pressKeysImg.moveLeft(10);
		break;

		case Keyboard::KEY_RIGHT:
			pressKeysImg.moveRight(10);
		break;


		//STRETCHING
		case Keyboard::KEY_A:
			pressKeysImg.setWidth(pressKeysImg.getWidth() - 10);
		break;
		case Keyboard::KEY_D:
			pressKeysImg.setWidth(pressKeysImg.getWidth() + 10);
		break;
		case Keyboard::KEY_S:
			pressKeysImg.setHeight(pressKeysImg.getHeight() - 10);
		break;
		case Keyboard::KEY_W:
			pressKeysImg.setHeight(pressKeysImg.getHeight() + 10);
		break;

		//OPACITY
		case Keyboard::KEY_E:
			pressKeysImg.setOpacity(pressKeysImg.getOpacity() - 10);
		break;
		case Keyboard::KEY_Q:
			pressKeysImg.setOpacity(pressKeysImg.getOpacity() + 10);
		break;


		case Keyboard::KEY_B:
	//		gRsrcMgr->reloadText( "Stana li ?", Colors::PURPLE, gFontId, helloText.textId, helloText.width, helloText.height);
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


