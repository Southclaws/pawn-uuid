include(AMXConfig)
include(AddSAMPPlugin)

set(SAMP_SDK_ROOT "${PROJECT_SOURCE_DIR}/lib/samp-plugin-sdk")
find_package(SAMPSDK REQUIRED)

include_directories(
	${SAMPSDK_INCLUDE_DIR}
)

add_samp_plugin(pawn-uuid
	${SAMPSDK_DIR}/amxplugin.cpp
	${SAMPSDK_DIR}/amxplugin2.cpp
	${SAMPSDK_DIR}/amx/getch.c
	guid.hpp
	guid.cpp
	common.hpp
	main.cpp
	impl.cpp
	impl.hpp
	natives.cpp
	natives.hpp
	plugin.def
)

if(UNIX)
target_link_libraries(pawn-uuid uuid)
endif()
# libuuid name is "uuid" so our project is named "pawn-uuid" and the line below
# renames the output back to "uuid.so" or "uuid.dll"
set_target_properties(pawn-uuid PROPERTIES OUTPUT_NAME "uuid")