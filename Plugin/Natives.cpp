#include "Natives.h"

namespace Natives {

	cell Hello(AMX* amx, cell* params) {
		logprintf("Hello world!!!\n");
		return 1;
	}

	cell PlayerWeapon(AMX* amx, cell* params) {
		const int playerid = params[1];
		BYTE weapon = pNetGame->pPlayerPool->pPlayer[playerid]->byteCurrentWeapon;
		logprintf("%d", weapon);
		return 1;
	}
	const AMX_NATIVE_INFO native_list[] = {
		{ "Hello", Hello },
		{ "PlayerWeapon", PlayerWeapon },
		{ NULL, NULL }
	};
};