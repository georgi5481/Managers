//Coresponding Header
#include "manager_utils/managers/ManagerHandler.h"

//C system includes
#include <cstdint>

//C++ system includes

//3rd-party includes

//Own includes
#include "manager_utils/config/ManagerHandlerCfg.h"
#include "manager_utils/managers/DrawMgr.h"
#include "manager_utils/managers/RsrcMgr.h"



int32_t ManagerHandler::init(const ManagerHandlerCfg& cfg){

	gDrawMgr = new DrawMgr();

	if(gDrawMgr == nullptr) {
		std::cerr << "Error, bad alloc for DrawMgr" << std::endl;
			return EXIT_FAILURE;
	}
	if (EXIT_SUCCESS != gDrawMgr->init(cfg.drawMgrCfg)){
			std::cerr << "gDrawMgr init() failed. Reason: " << std::endl;
			return EXIT_FAILURE;
	}



	gRsrcMgr = new RsrcMgr();

	if(gRsrcMgr == nullptr) {
		std::cerr << "Error, bad alloc for gRsrcMgr" << std::endl;
			return EXIT_FAILURE;
	}
	if (EXIT_SUCCESS != gRsrcMgr->init(cfg.rsrcMgrCfg)){
			std::cerr << "gRsrcMgr init() failed. Reason: " << std::endl;
			return EXIT_FAILURE;
	}

		//downcasting pointers to MgrBase cuz the deinit method isn't pure virtual
	_managers[DRAW_MGR_IDX] = static_cast<MgrBase*>(gDrawMgr);
	_managers[RSRC_MGR_IDX] = static_cast<MgrBase*>(gRsrcMgr);
	return EXIT_SUCCESS;
}


void ManagerHandler::deinit(){
	gRsrcMgr->deinit();
	delete gRsrcMgr;
	gRsrcMgr = nullptr;

	gDrawMgr->deinit();
	delete gDrawMgr;
	gDrawMgr = nullptr;
}

void process(){


}
