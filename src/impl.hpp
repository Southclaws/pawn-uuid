/*
# impl.hpp

From here on, it's just regular C++ code, no AMX/Pawn/SA:MP stuff. This header
is for declaring implementation functions for the plugin's core functionality.
*/

#include <string>

#include "guid.hpp"

#ifndef uuid_IMPL_H
#define uuid_IMPL_H

namespace Impl
{
std::string UUID();
};

#endif
