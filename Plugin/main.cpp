/*
    FILE: main.cpp
    AUTHOR: LouzinDeev
*/

#include "common.h"
#include "structs.h"

logprintf_t logprintf;
RakServer* pRakServer;
CNetGame* pNetGame;
AMX* pGameModeAmx;
void** ppPluginData;

PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports() {
    return SUPPORTS_VERSION | SUPPORTS_AMX_NATIVES | SUPPORTS_PROCESS_TICK;
}

PLUGIN_EXPORT bool PLUGIN_CALL Load(void** ppData) {
    ppPluginData = ppData;
    pAMXFunctions = ppData[PLUGIN_DATA_AMX_EXPORTS];
    logprintf = (logprintf_t)ppData[PLUGIN_DATA_LOGPRINTF];
    logprintf("* Plugin loaded");
    return true;
}

PLUGIN_EXPORT int PLUGIN_CALL AmxLoad(AMX* amx) {
    static bool firstLoad = false;
    pGameModeAmx = amx;
    if(!firstLoad) {
        int(*pnf_GetNetGame)(void) = (int(*)(void))ppPluginData[PLUGIN_DATA_NETGAME];
        pNetGame = reinterpret_cast<CNetGame*>(pnf_GetNetGame());

        int(*pnf_GetRakServer)(void) = (int(*)(void))ppPluginData[PLUGIN_DATA_RAKSERVER];
        pRakServer = reinterpret_cast<RakServer*>(pnf_GetRakServer);
    }
    return amx_Register(amx, Natives::native_list, -1);
}

PLUGIN_EXPORT void PLUGIN_CALL Unload() {
    
}

PLUGIN_EXPORT int PLUGIN_CALL AmxUnload(AMX* amx) {
    return 1;
}

PLUGIN_EXPORT void PLUGIN_CALL ProcessTick() {
    
}