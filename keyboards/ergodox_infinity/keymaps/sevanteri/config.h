#ifndef CONFIG_USER_H
#define CONFIG_USER_H


#include "../../config.h"

//#define TAPPING_TOGGLE 3
#ifdef TAPPING_TERM
#undef TAPPING_TERM
#endif
#define TAPPING_TERM 250
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD
// #define RETRO_TAPPING


#define AUTO_SHIFT_TIMEOUT 200
#define NO_AUTO_SHIFT_ALPHA

#endif
