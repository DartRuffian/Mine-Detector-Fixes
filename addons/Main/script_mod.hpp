#define MAINPREFIX DA
#define PREFIX MDF

#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\DA\MDF\Common\script_version.hpp"

#define VERSION_ARR MAJOR,MINOR,PATCHLVL,BUILD

#define REQUIRED_VERSION 2.14

#ifndef COMPONENT_BEAUTIFIED
    #define COMPONENT_BEAUTIFIED COMPONENT
#endif

#define GFUNC(FNCNAME) TRIPLES(PREFIX,fnc,FNCNAME)