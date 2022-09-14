# Sandwich Engine - bgfx external dependency

file(GLOB BIMG_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/bimg/include/bimg/*.h)
file(GLOB BIMG_SRC ${CMAKE_CURRENT_SOURCE_DIR}/bimg/src/*.cpp BIMG_SRC ${CMAKE_CURRENT_SOURCE_DIR}/bimg/src/*.h)
file(GLOB DECODER_SRC ${CMAKE_CURRENT_SOURCE_DIR}/bimg/3rdparty/astc-codec/src/decoder/*.cc)

set( BGFX_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/bx/src/amalgamated.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/bgfx/src/amalgamated.cpp
	${BIMG_HEADERS}
	${BIMG_SRC}
	${DECODER_SRC}
)

set( BGFX_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/bgfx/include )
set( BX_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/bx/include )
set( BIMG_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/bimg/include )

add_library( bgfx STATIC ${BGFX_SOURCES} )

if(WIN32)
	target_link_libraries(bgfx INTERFACE psapi)
	set_property(TARGET bgfx PROPERTY
		MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")
else()
	find_package(OpenGL REQUIRED)
	find_package(X11 REQUIRED)
	include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
	target_link_libraries(bgfx ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} ${X11_LIBRARIES})
endif()

set_property(TARGET bgfx PROPERTY FOLDER "External/bgfx")

add_compile_definitions(BGFX_CONFIG_DEBUG=$<$<CONFIG:Debug>:1>$<$<CONFIG:Release>:0> 
	BX_CRT_NONE=0
	_CRT_SECURE_NO_WARNINGS 
	__STDC_FORMAT_MACROS)

if(WIN32)
target_include_directories(bgfx PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/bgfx/include
	${CMAKE_CURRENT_SOURCE_DIR}/bx/include
	${CMAKE_CURRENT_SOURCE_DIR}/bimg/include
	INTERFACE
	${CMAKE_CURRENT_SOURCE_DIR}/bgfx/include
	${CMAKE_CURRENT_SOURCE_DIR}/bx/include
	${CMAKE_CURRENT_SOURCE_DIR}/bimg/include
	PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/bgfx/3rdparty
	${CMAKE_CURRENT_SOURCE_DIR}/bgfx/3rdparty/dxsdk/include
	${CMAKE_CURRENT_SOURCE_DIR}/bgfx/3rdparty/khronos
	${CMAKE_CURRENT_SOURCE_DIR}/bx/3rdparty
	${CMAKE_CURRENT_SOURCE_DIR}/bx/include/compat/msvc
	${CMAKE_CURRENT_SOURCE_DIR}/bimg/3rdparty
	${CMAKE_CURRENT_SOURCE_DIR}/bimg/3rdparty/astc-codec/
	${CMAKE_CURRENT_SOURCE_DIR}/bimg/3rdparty/astc-codec/include
	${CMAKE_CURRENT_SOURCE_DIR}/bimg/3rdparty/iqa/include
)
else()
target_include_directories(bgfx PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/bgfx/include
	${CMAKE_CURRENT_SOURCE_DIR}/bx/include
	${CMAKE_CURRENT_SOURCE_DIR}/bimg/include
	INTERFACE
	${CMAKE_CURRENT_SOURCE_DIR}/bgfx/include
	${CMAKE_CURRENT_SOURCE_DIR}/bx/include
	${CMAKE_CURRENT_SOURCE_DIR}/bimg/include
	PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/bgfx/3rdparty
	${CMAKE_CURRENT_SOURCE_DIR}/bgfx/3rdparty/dxsdk/include
	${CMAKE_CURRENT_SOURCE_DIR}/bgfx/3rdparty/khronos
	${CMAKE_CURRENT_SOURCE_DIR}/bx/3rdparty
	${CMAKE_CURRENT_SOURCE_DIR}/bimg/3rdparty
	${CMAKE_CURRENT_SOURCE_DIR}/bimg/3rdparty/astc-codec/
	${CMAKE_CURRENT_SOURCE_DIR}/bimg/3rdparty/astc-codec/include
	${CMAKE_CURRENT_SOURCE_DIR}/bimg/3rdparty/iqa/include
)
endif()
