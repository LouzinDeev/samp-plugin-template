#ifndef _PLUGIN_H_
#define _PLUGIN_H_
#include "common.h"

typedef cell (*native_t)(AMX* amx, cell* params);

class Plugin
{
    private:
        static int native_count;
    public:
        int register_natives(AMX* amx);
        void add_native(const char* name, native_t native);
        
};

#endif