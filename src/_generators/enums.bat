rem 
rem 
call cxx17 enums.cpp
enums.exe > ..\enums.h

if exist enums.exe del enums.exe
if exist enums.obj del enums.obj

