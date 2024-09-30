:: I/O file to link the Vulkan API/SDK allowing us to use it.
@echo off 
::Echo off disables console outputs.
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
::Calls a file from Visual Studio. this can be supplied as well in the folder.

SET includes=/Isrc /I%VULKAN_SDK%/Include
::
SET links=/link /LIBPATH:%VULKAN_SDK%/Lib vulkan-1.lib
::
SET defines=/D DEBUG
::
echo "Building main..."

cl /EHsc %includes% %defines% C:\Users\amsta\PongFromScratch\main.cpp %links%
::cl (compiler) is called form the vcvars.bat file.
::EHsc tells the program how to handle things if the file crashes
::