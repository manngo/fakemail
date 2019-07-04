/*	Platform
	================================================
	This works as is on MacOS and Linux.
	If you are using Windows the #ifdef below should
	detect it, and the POSIX function realpath() is
	faked with the Windows function _fullpath()
	================================================ */
	#ifdef _WIN32
		#define realpath(N,R) _fullpath((R),(N),_MAX_PATH)
	#endif

//	Includes

	#include <fstream>
	#include <string>
	#include <iostream>
	#include <stdio.h>
	#include <libgen.h>

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

		//	Do the thing …
			while(getline(cin,input)) {
				output<<input;
				output<<"\n";
			}
			output<<"================================================\n\n";

		return 0;
	}
