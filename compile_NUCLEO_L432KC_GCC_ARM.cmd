echo off 

set PATH=%PATH%;C:\\Program Files (x86)\\GNU Tools Arm Embedded\\9 2019-q4-major\\bin

SET THEPROJECT=F:\prj_soft\mbed-studio\05D-ModbusVacuum
SET THESOURCE=%THEPROJECT% 
SET THETARGET=%THEPROJECT%\BUILD\NUCLEO_L432KC\GCC_ARM
SET THEMAKE=%THEPROJECT%\mbed-os\tools\make.py

SET THEPYTHON=%localappdata%\"Mbed Studio\mbed-studio-tools\python\python.exe" 

SET THECOMPILER=%THEMAKE% --mcu NUCLEO_L432KC --tool GCC_ARM --source %THESOURCE% --build %THETARGET%

SET THEEND=%THEPYTHON%%THECOMPILER% 
echo on

        
%THEEND%

