@echo off
if "%~1"=="" (
	set file="%~dp0\mail.txt"
) else (
	set file="%~1"
)

echo ================================================>>"%file%"
echo %date% %time%>>"%file%"
echo ------------------------------------------------>>"%file%"
echo.>>"%file%"
more | find /v "" >> "%file%"
