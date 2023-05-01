@set TESTEXE=.out\msvc2019\x64\Debug\umba-tabtool.exe

@if not exist test_res mkdir tests
@if not exist test_res mkdir test_res

@rem %TESTEXE% --check --command=space
%TESTEXE% --check --space=space src\umba-tabtool.cpp

@copy /Y src\umba-tabtool.cpp tests\umba-tabtool.cpp
%TESTEXE% --tab-convert tests\umba-tabtool.cpp  test_res\umba-tabtool-tabs-expanded.cpp
@rem start meld tests\umba-tabtool.cpp  test_res\umba-tabtool-tabs-expanded.cpp

%TESTEXE% --check --normalize tests\umba-tabtool.cpp
%TESTEXE% --normalize tests\umba-tabtool.cpp  test_res\umba-tabtool-normalized.cpp
@start meld tests\umba-tabtool.cpp  test_res\umba-tabtool-normalized.cpp


