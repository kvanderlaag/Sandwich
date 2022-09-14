# Sandwich Engine
cmake_minimum_required(VERSION 3.19)

cmake_policy(SET CMP0091 NEW)
set(CMAKE_CXX_STANDARD_REQUIRED 14)
set_property( GLOBAL PROPERTY USE_FOLDERS ON)

# Sandwich CMake Project
project(Sandwich)

# We'll need these architecture names for referencing things later.
if (WIN32)
	if ("${CMAKE_SIZEOF_VOID_P}" STREQUAL "4")
		set(BUILD_ARCH Win32)
	elseif("${CMAKE_SIZEOF_VOID_P}" STREQUAL "8")
		set(BUILD_ARCH x64)
	endif()
else()
	set(BUILD_ARCH native CACHE STRING "Compile for this CPU architecture.")
endif()

add_subdirectory(source)
