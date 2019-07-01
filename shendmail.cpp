#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
//#include <unistd.h>
#include <libgen.h>

using namespace std;
int main(int argc, char *argv[]) {
	//	CWD
		char buffer[FILENAME_MAX];
		realpath(argv[0],buffer);
		string cwd=dirname(buffer);

//	cout<<cwd<<"\n";

	//	Define Input
		string input;

	//	Define Output
		string outputFile=cwd+"/mail.txt";
		if(argc>1) outputFile=argv[1];
		ofstream output;
		output.open(outputFile,ofstream::out | ofstream::app | ofstream::binary);

//	cout<<outputFile<<"\n";

	//	Do the thing …
		while(getline(cin,input)) {
			output<<input;
			output<<"\n";
		}
		output<<"================================================\n\n";

	return 0;
}
