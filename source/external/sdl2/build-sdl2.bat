set plat=%1

mkdir SDL2-2.0.14\build
mkdir SDL2-2.0.14\build\%plat%
cd SDL2-2.0.14\build\%plat%
cmake ..\..\ -G "Visual Studio 16 2019" -A %plat%

cd ..\..\..\

FOR /F "tokens=* USEBACKQ" %%F IN (`..\tools\windows\vswhere -latest -requires Microsoft.Component.MSBuild -find **\IDE\devenv.exe`) DO (
SET devenv="%%F"
)

%devenv% "SDL2-2.0.14\build\%1\SDL2.sln" /Build "Debug|%plat%"
%devenv% "SDL2-2.0.14\build\%1\SDL2.sln" /Build "Release|%plat%"