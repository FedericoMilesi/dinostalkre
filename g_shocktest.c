// STATUS: NOT STARTED

#include "g_shocktest.h"
#include "libgf.h"
#include "g_shock.h"
#include "mem.h"

int frame;

int gsFrame;

int gsPause;

/* 100% match */
void G_SHOCKTEST_Init() 
{
    gsFrame = frame;
    
    GF_InitGraphicsFramework();
    
    gsShockInit();
    
    gsPause = 0;
    
    MEM_CheckViolation();
}

G_SHOCKTEST_Exec() {}

G_SHOCKTEST_End() {}
