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
#include "plugin-natives/NativeFunc.hpp" // must be included last

PAWN_NATIVE_DECL(uuid, UUID, bool(char*))

// namespace Natives
// {
// cell UUID(AMX *amx, cell *params);
// }

#endif
