/*
# natives.cpp

This source file contains the bridge between natives and implementations. I
prefer to keep the actual implementation separate. The implementation contains
no instances of `cell` or `AMX*` and is purely C++ and external library code.
The code here acts as the translation between AMX data types and native types.
*/

#include "natives.hpp"

cell Natives::UUID(AMX* amx, cell* params)
{
    auto uuid = Impl::UUID();
    amx_SetCppString(amx, params[1], uuid, params[2]);
    return 0;
}
