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

	cell Actor(AMX* amx, cell* params) {
		const int playerid = params[1];
		int RPC_ShowActor = 171;
		RakNet::BitStream bs;
		bs.Write((WORD)5); //Actor ID.
		bs.Write((DWORD)287); //The actor's skin ID.
		bs.Write((float)145.9017); //X.
		bs.Write((float)-69.3553); //Y.
		bs.Write((float)1.4297); //Z.
		bs.Write((float)193.4302); //Angle.
		bs.Write((float)100.0); //Actor's Health.
		pRakServer->RPC(&RPC_ShowActor, &bs, LOW_PRIORITY, RELIABLE_ORDERED, 0, pRakServer->GetPlayerIDFromIndex(playerid), 0, 0);
		return 1;
	}

	const AMX_NATIVE_INFO native_list[] = {
		{ "Hello", Hello },
		{ "PlayerWeapon", PlayerWeapon },
		{ "Actor", Actor},
		{ NULL, NULL }
	};
};