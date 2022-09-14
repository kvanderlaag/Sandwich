# Sandwich Engine - External dependencies

if (WIN32)
	add_subdirectory(sdl2)	
	add_subdirectory(bgfx)
else()
	add_subdirectory(sdl2)
	add_subdirectory(bgfx)
endif()
