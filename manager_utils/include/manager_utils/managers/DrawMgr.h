#ifndef MANAGER_UTILS_INCLUDE_MANAGER_UTILS_MANAGERS_DRAWMGR_H_
#define MANAGER_UTILS_INCLUDE_MANAGER_UTILS_MANAGERS_DRAWMGR_H_		//first singleton object
//C system includes

//C++ system includes


//3rd-party includes

//Own includes
#include "manager_utils/managers/MgrBase.h"
#include "sdl_utils/MonitorWindow.h"
#include "sdl_utils/Renderer.h"

//Forward Declaration

class DrawMgr : public MgrBase {
public:

private:
	MonitorWindow _window;
	Renderer _renderer;

	//hod maximum fram rate cap
	uint32_t _maxFrames{0};
};

extern DrawMgr *gDrawMgr;

#endif /* MANAGER_UTILS_INCLUDE_MANAGER_UTILS_MANAGERS_DRAWMGR_H_ */
