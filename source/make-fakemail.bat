@ECHO OFF
	set PATH=C:\mingw\bin;%PATH%;

	g++ fakemail.cpp -o fakemail.exe
	g++ -static-libgcc -static-libstdc++ fakemail.cpp -o fakemail-static.exe
pause
