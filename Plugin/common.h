#ifndef _COMMON_H_
#define _COMMON_H_

#include <iostream>
#include <cstdlib>
#include "amx/amx.h"
#include "amx/amx2.h"
#include "plugincommon.h"

#include "types.h"
#include "CVector.h"
#include "BitStream.h"
#include "structs.h"
#include "Natives.h"

extern class RakServer* pRakServer;
extern void** ppPluginData;
extern void* pAMXFunctions;
extern logprintf_t logprintf;

#endif