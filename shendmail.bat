@echo off
set file="%dp0\mail.txt"
echo ================================================>>"%file%"
echo %date% %time%>>"%file%"
echo ------------------------------------------------>>"%file%"
echo .>>"%file%"
more | find /v "" >> "%file%"
