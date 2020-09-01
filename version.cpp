#include "version.h"

int GetVersion()
{
#ifdef PROJECT_VERSION_PATCH
    return PROJECT_VERSION_PATCH;
#else
    return 0;
#endif
}