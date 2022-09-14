# Sandwich Engine - Sandwich Game Project

file(GLOB_RECURSE MAIN_SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/private *.cpp *.c)
file(GLOB_RECURSE MAIN_INCLUDES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/public *.h *.hpp)

add_executable(SandwichGame ${MAIN_SOURCES} ${MAIN_INCLUDES})

add_dependencies(SandwichGame LibSandwich)

if(WIN32)
	set_property(TARGET SandwichGame PROPERTY
		MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")
endif()

target_link_libraries(SandwichGame
	Math
	LibSandwich
)