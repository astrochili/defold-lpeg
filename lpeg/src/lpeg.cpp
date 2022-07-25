/*
** LPeg extension for the Defold game engine
** https://github.com/astrochili/defold-lpeg
*/

#define LIB_NAME "lpeg"
#define MODULE_NAME "lpeg"

#include <dmsdk/sdk.h>
#include "wrapper.h"

dmExtension::Result InitializeLPeg(dmExtension::Params* params)
{
    luaopen_lpeg(params->m_L);
    lua_pop(params->m_L, 2);
        
    dmLogInfo("Registered %s Extension\n", MODULE_NAME);
    return dmExtension::RESULT_OK;
}

dmExtension::Result FinalizeLPeg(dmExtension::Params* params)
{
    dmLogInfo("Finalize %s Extension\n", MODULE_NAME);
    return dmExtension::RESULT_OK;
}

DM_DECLARE_EXTENSION(lpeg, LIB_NAME, 0, 0, InitializeLPeg, 0, 0, FinalizeLPeg)
