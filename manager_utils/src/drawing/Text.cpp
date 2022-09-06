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

	 _textContent= text;	//setting the information in case we need it later on
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

	_isCreated = false;
	_isDestroyed = false;
	Widget::reset();
}

void Text::setText(const std::string& text){
	if(text == _textContent){
		return;
	}

	_textContent = text;
	gRsrcMgr->reloadText( text, _color, _fontId,
			_drawParams.textId, _drawParams.width, _drawParams.height);

}
void Text::setColor(const Color& color){
	if(color == _color){
		return;
	}

	_color = color;
	gRsrcMgr->reloadText( _textContent, _color, _fontId,
			_drawParams.textId, _drawParams.width, _drawParams.height);

}

std::string Text::getTextContent() const{
	return _textContent;
}
