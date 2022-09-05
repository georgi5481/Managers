//Coresponding Header

#include "manager_utils/drawing/Text.h"

//C system includes

//C++ system includes

//3rd-party includes

//Own includes

Text::~Text(){
	if(_isCreated && !_isDestroyed){
		destroy();
	}
}

void Text::create(int32_t rsrcId, const Point& pos = Point::ZERO){

}
void Text::destroy(){

}

void Text::setText(const std::string& text){

}
void Text::setColor(const Color& color){

}
std::string Text::getTextContent() const{
	return _textContent;
}
