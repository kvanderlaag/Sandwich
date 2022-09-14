# Sandwich Engine - SDL2 external dependency.

# Include SDL2 as a dependency; link it statically
set( SDL_STATIC ON CACHE BOOL "" FORCE )
set( SDL_SHARED OFF CACHE BOOL "" FORCE )
set( LIBC ON CACHE BOOL "" FORCE )
add_subdirectory(SDL2-2.0.14)
	
# Stick it in an external folder
set_property(TARGET SDL2-static PROPERTY FOLDER "External/SDL2")
set_property(TARGET SDL2main PROPERTY FOLDER "External/SDL2")