// STATUS: NOT STARTED

#include "main.h"
#include "devfont.h"
#include "g_pad.h"
#include "mem.h"
#include "frozen_types.h"

main() {}

static SelectTest() {}

static InitSystem() {}

static InitSif() {}

static SetDefaultGsEnv() {}

/* 100% match */
static void EndSystem() 
{
    sceDevConsClose(gConsole);
    
    gsPad_End();
    
    MEM_EndAllocation();
}

_gsMuteki_INIT() {}

_gsMuteki_EXEC() {}

/* empty */
_gsMuteki_END() {}

_gsOmakePower_INIT() {}

_gsOmakePower_EXEC() {}

/* empty */
_gsOmakePower_END() {}
