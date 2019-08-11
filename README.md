# fakemail


A fake sendmail to enable testing of PHP mail functions. It will accept the input and save the results into a text file.

In fact, this is not limited to using as a `sendmail` substitute. It will accept any text which is piped to it and save it.

##	Usage

You can use `fakemail` from within PHP or from the command line. If you use it from the command line, it simply saves incoming text to a text file, and has nothing to do with mail.

###	PHP

In `php.ini` search for:

	;sendmail_path …`

remove the semicolon and change it to:

<<<<<<< HEAD
	sendmail+path=/path/to/fakemail  
	sendmail+path=/path/to/fakemail /path/to/anything.txt

The semicolon indicates a comment. It is possible that there is an existing legitimate `sendmail_path` (without a semicolon). If that is the case, and you prefer to use `fakemail`, comment out the original and add the new version afterwards.
=======
`sendmail_path=/path/to/fakemail`  
`sendmail_path=/path/to/fakemail /path/to/anything.txt`
>>>>>>> 9946f224f1e6c1d175e89b6984495153a07ba674

The first `/path/to/` should be the actual path of the program, while the `fakemail` should be one of the versions below.

The second form allows you to specify the path of the text file. If not specified specified, it defaults to `mail.txt` in the same directory as the `fakemail` program.



###	Command Line

	echo … | fakemail
	echo … | fakemail /path/to/file.txt

##	Versions

Depending on your preferences, there are 4 versions:

| OS      | Version         | Description          |
|---------|-----------------|----------------------|
| MacOS   | `fakemail.sh`   | Shell Script         |
| MacOS   | `fakemail`      | Command Line Program |
| Windows | `fakemail.bat`  | Batch File           |
| Windows | `fakemail.exe`  | Executable           |

Whether you use the Script/Batch or the Program version is a matter of taste.

Note: If you use `fakemail.sh` on MacOS, you need to make sure that you set the permissions to something like `777`.
