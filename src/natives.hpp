/*
# natives.hpp

Contains all the `PAWN_NATIVE_DECL` for native function declarations.
*/

#ifndef uuid_NATIVES_H
#define uuid_NATIVES_H

#include <string>

#include <amx/amx2.h>

#include "common.hpp"
#include "impl.hpp"

namespace Natives {
cell UUID(AMX* amx, cell* params);
}

#endif
