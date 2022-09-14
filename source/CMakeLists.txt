# Sandwich - Add subdirectories in the order they're required.

# External dependencies - bgfx & SDL2
add_subdirectory(external)

# Sandwich Math Library
add_subdirectory(math)

# Sandwich Engine core library
add_subdirectory(LibSandwich)

# Main Game project
add_subdirectory(main)