/*	fakemail
	================================================
	Platform
	================================================
	This works as is on MacOS and Linux.
	If you are using Windows the #ifdef below should
	detect it, and the POSIX function realpath() is
	faked with the Windows function _fullpath()
	================================================
	Usage
	================================================
	Command Line:
		echo … | fakemail
		echo … | fakemail /path/to/file.txt
	php.ini:
		sendmail_path /path/to/fakemail
		sendmail_path /path/to/fakemail /path/to/file.txt

	The Windows version will be called fakemail.exe
	================================================ */

//	Platform

	#ifdef _WIN32
		#define realpath(N,R) _fullpath((R),(N),_MAX_PATH)
	#endif

//	Includes

	#include <fstream>
	#include <string>
	#include <iostream>
	#include <stdio.h>
	#include <libgen.h>
	#include <ctime>

	using namespace std;

//	main

	int main(int argc, char *argv[]) {
		//	CWD
			char buffer[FILENAME_MAX];
			realpath(argv[0],buffer);
			string cwd=dirname(buffer);

		//	Define Input
			string input;

		//	Define Output
			string outputFile=cwd+"/mail.txt";
			if(argc>1) outputFile=argv[1];
			ofstream output;
			output.open(outputFile,ofstream::out | ofstream::app | ofstream::binary);

		//	Current Date & Time
			time_t ttime = time(NULL);
			tm *now = localtime(&ttime);
			char dtbuffer[48];

		//	Do the thing …
			output<<"================================================\n";
			sprintf(dtbuffer,"%04d-%02d-%02d %02d:%02d:%02d\n",now->tm_year+1900,now->tm_mon,now->tm_mday,now->tm_hour,now->tm_min,now->tm_sec);
			output<<dtbuffer;
			output<<"------------------------------------------------\n";
			while(getline(cin,input)) {
				output<<input;
				output<<"\n";
			}
			output<<"================================================\n\n";

		return 0;
	}
