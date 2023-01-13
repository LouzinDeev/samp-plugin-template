#ifndef _NATIVES_H_
#define _NATIVES_H_

#include "common.h"

namespace Natives {
	cell Hello(AMX* amx, cell* params);
	cell PlayerWeapon(AMX* amx, cell* params);
	extern "C" const AMX_NATIVE_INFO native_list[];
};

#endif