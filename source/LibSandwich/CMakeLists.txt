# Sandwich Engine - Core engine library

file(GLOB_RECURSE LIBSANDWICH_SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/private *.cpp *.c)
file(GLOB_RECURSE LIBSANDWICH_INCLUDES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/public *.h *.hpp)

add_library(LibSandwich STATIC ${LIBSANDWICH_SOURCES} ${LIBSANDWICH_INCLUDES})

add_dependencies(LibSandwich bgfx SDL2-static SDL2main Math)

if(WIN32)
	set_property(TARGET LibSandwich PROPERTY
		MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")
endif()

set_property(TARGET LibSandwich PROPERTY FOLDER "SandwichCore")

target_link_libraries(LibSandwich INTERFACE
	Math SDL2main SDL2-static bgfx
)

if(NOT WIN32)
	target_link_libraries(LibSandwich PUBLIC stdc++)
endif()

target_include_directories(LibSandwich PUBLIC 
	$<TARGET_PROPERTY:bgfx,INTERFACE_INCLUDE_DIRECTORIES>
	$<TARGET_PROPERTY:SDL2-static,INTERFACE_INCLUDE_DIRECTORIES>
	$<TARGET_PROPERTY:SDL2main,INTERFACE_INCLUDE_DIRECTORIES>
	$<TARGET_FILE_DIR:SDL2main>/include
	$<TARGET_PROPERTY:Math,INTERFACE_INCLUDE_DIRECTORIES>
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/public>
	$<INSTALL_INTERFACE:LibSandwich/public>
	$<TARGET_FILE_DIR:SDL2-static>/../include
)
