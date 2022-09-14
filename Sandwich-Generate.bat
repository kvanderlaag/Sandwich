@echo OFF
REM =================================
REM = Sandwich Engine Build Project =
REM =                               =
REM = Author: Keegan van der Laag   =
REM = Date: 20-06-2021              =
REM =================================

mkdir build
mkdir build\win64
mkdir build\win32

cd build\win64
cmake ..\..\ -G "Visual Studio 16 2019" -A x64 -DCMAKE_CONFIGURATION_TYPES:STRING=Debug;Release ^
  -D CMAKE_TRY_COMPILE_CONFIGURATION:STRING=Release ^
  -D CMAKE_C_FLAGS_RELEASE:STRING="/MT /O2 /Ob2 /DNDEBUG" ^
  -D CMAKE_CXX_FLAGS_RELEASE:STRING="/MT /O2 /Ob2 /DNDEBUG" ^
  -D CMAKE_C_FLAGS_DEBUG:STRING="/MTd /Zi /Ob0 /Od /D_DEBUG /RTC1" ^
  -D CMAKE_CXX_FLAGS_DEBUG:STRING="/MTd /Zi /Ob0 /Od /D_DEBUG /RTC1"
cd ..\win32
cmake ..\..\ -G "Visual Studio 16 2019" -A Win32 -DCMAKE_CONFIGURATION_TYPES:STRING=Debug;Release ^
  -D CMAKE_TRY_COMPILE_CONFIGURATION:STRING=Release ^
  -D CMAKE_C_FLAGS_RELEASE:STRING="/MT /O2 /Ob2 /DNDEBUG" ^
  -D CMAKE_CXX_FLAGS_RELEASE:STRING="/MT /O2 /Ob2 /DNDEBUG" ^
  -D CMAKE_C_FLAGS_DEBUG:STRING="/MTd /Zi /Ob0 /Od /D_DEBUG /RTC1" ^
  -D CMAKE_CXX_FLAGS_DEBUG:STRING="/MTd /Zi /Ob0 /Od /D_DEBUG /RTC1"
cd ..\..\