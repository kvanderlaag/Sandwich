set plat=%1

FOR /F "tokens=* USEBACKQ" %%F IN (`..\tools\windows\vswhere -latest -requires Microsoft.Component.MSBuild -find **\IDE\devenv.exe`) DO (
SET devenv="%%F"
)

%devenv% "bgfx\.build\projects\vs2019\bgfx.sln" /Build "Debug|%plat%"
%devenv% "bgfx\.build\projects\vs2019\bgfx.sln" /Build "Release|%plat%"