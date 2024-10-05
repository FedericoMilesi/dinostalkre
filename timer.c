// STATUS: NOT STARTED

#include "timer.h"

int* gTimerCountRegs[1];

TIMER_InitTimer() {}

TIMER_SetTimer() {}

TIMER_StartTimer() {}

TIMER_StopTimer() {}

/* 100% match */
unsigned short TIMER_GetTimer(int arg0) 
{
    return *gTimerCountRegs[arg0];
}
