@echo off

set opts=-FC -GR- -EHa- -nologo -Zi
set code=%cd%
pushd build

for %%f in (%code%\*.cpp) do (
  cl %opts% %code%\%%~nf.cpp -Fe%%~nf.exe
)
popd
