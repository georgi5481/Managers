#ifndef MANAGER_UTILS_INCLUDE_MANAGER_UTILS_MANAGERS_MANAGERHANDLER_H_
#define MANAGER_UTILS_INCLUDE_MANAGER_UTILS_MANAGERS_MANAGERHANDLER_H_

//C system includes

//C++ system includes
#include <cstdint>
//3rd-party includes

//Own includes
#include"manager_utils/managers/MgrBase.h"
//Forward Declaration
struct ManagerHandlerCfg;

class ManagerHandler{
public:
int32_t init(const ManagerHandlerCfg& cfg);
private:

};

#endif /* MANAGER_UTILS_INCLUDE_MANAGER_UTILS_MANAGERS_MANAGERHANDLER_H_ */
