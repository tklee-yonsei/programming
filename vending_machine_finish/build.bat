@echo off
echo Building C Vending Machine Program...

REM Set codepage for Korean output
chcp 65001 > nul

REM Compiler flags for Korean character support
set CFLAGS=-Wall -Wextra -g -finput-charset=UTF-8 -fexec-charset=CP949

REM Compile source files
echo Compiling source files...
gcc %CFLAGS% -c main.c -o main.o
if errorlevel 1 goto error

gcc %CFLAGS% -c vending_machine.c -o vending_machine.o
if errorlevel 1 goto error

gcc %CFLAGS% -c product.c -o product.o
if errorlevel 1 goto error

gcc %CFLAGS% -c utils.c -o utils.o
if errorlevel 1 goto error

REM Create executable
echo Creating executable...
gcc %CFLAGS% -o vending_machine.exe main.o vending_machine.o product.o utils.o
if errorlevel 1 goto error

echo Build completed! vending_machine.exe has been created.
echo Use run.bat to execute the program.
goto end

:error
echo Build failed with errors.
pause

:end 