//Coresponding Header

#include "manager_utils/drawing/Text.h"

//C system includes

//C++ system includes
#include<cstdint>
#include<iostream>
//3rd-party includes

//Own includes
#include "manager_utils/managers/RsrcMgr.h"


Text::~Text(){
	if(_isCreated && !_isDestroyed){
		destroy();
	}
}

void Text::create(const std::string& text, int32_t forntId, const Color& color,
									int32_t rsrcId, const Point& pos){
	if(_isCreated){
			std::cerr << "Error, text with rsrcId: " << rsrcId
					<< " was already created. Will not create twice. " << std::endl;
		}

	gRsrcMgr->createText( text, color, rsrcId,
	_drawParams.textId, _drawParams.width, _drawParams.height);

	 _textContent= text;
	 _color = color;
	 _fontId = rsrcId;

	_drawParams.pos = pos;
	_drawParams.widgetType = WidgetType::TEXT;


	_isCreated = true;
	_isDestroyed = false;
}

void Text::destroy(){
	if(!_isCreated){
		std::cerr << "Error, text was already destroyed" << std::endl;
		return;
	}

	gRsrcMgr->createText( "Hello,  C++ dudes", Colors::GREEN, cfg.textFontId,
	helloText.textId, helloText.width, helloText.height);
	helloText.pos = Point::ZERO;
	helloText.widgetType = WidgetType::TEXT;

	_isCreated = false;
	_isDestroyed = false;
	Widget::reset();
}

void Text::setText(const std::string& text){

}
void Text::setColor(const Color& color){

}
std::string Text::getTextContent() const{
	return _textContent;
}
