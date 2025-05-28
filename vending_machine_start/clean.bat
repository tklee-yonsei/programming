@echo off
echo Cleaning compiled files...

REM Delete object files
if exist *.o del *.o

REM Delete executable file
if exist vending_machine.exe del vending_machine.exe

echo Clean completed!
pause 