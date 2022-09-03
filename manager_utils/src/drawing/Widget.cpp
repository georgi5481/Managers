//Coresponding Header
#include "manager_utils/drawing/Widget.h"
//C system includes

//C++ system includes

//3rd-party includes

//Own includes
#include "manager_utils/managers/DrawMgr.h"
void Widget::draw() {
	if(_isVisible){
		gDrawMgr-> addDrawCmd(_drawParams);
	}
}
//setter & getters
void Widget::reset() {	//returning the boolean values into their original state
	 _isCreated = false;
	 _isVisible = true;
	 _isAlphaModulationEnabled = false;
}
void Widget::setPosition(const Point& pos) {
	_drawParams.pos = pos;
}
void Widget::setPosition(int32_t x, int32_t y) {
	_drawParams.pos.x = x;
	_drawParams.pos.y = y;
}
void Widget::setOpacity(int32_t opacity) {
	_drawParams.opacity = opacity;
}


int32_t Widget::getOpacity() const{
	return _drawParams.opacity;
}
Point Widget::getPosition() const{
	return _drawParams.pos;
}

void Widget::activateAlphaModulation() {

}
void Widget::deactivateAlphaModulation() {

}

void Widget::show() {
	_isVisible = true;
}
void Widget::hide() {
	_isVisible = false;
}

void Widget::moveRight(int32_t delta) {
	_drawParams.pos.x += delta;
}
void Widget::moveLeft(int32_t delta) {
	_drawParams.pos.x -= delta;
}
void Widget::moveUp(int32_t delta) {
	_drawParams.pos.y -= delta;
}
void Widget::moveDown(int32_t delta) {
	_drawParams.pos.y += delta;
}

