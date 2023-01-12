#include "Natives.h"

namespace Natives {

	cell Hello(AMX* amx, cell* params) {
		logprintf("Hello world!!!\n");
		return 1;
	}

	const AMX_NATIVE_INFO native_list[] = {
		{ "Hello", Hello },
		{ NULL, NULL }
	};
};