# fakemail


A fake sendmail to enable testing of PHP mail functions. It will accept the input and save the results into a text file.

In fact, this is not limited to using as a `sendmail` substitute. It will accept any text which is piped to it and save it.

##	Usage

In php.ini search for:

`;sendmail_path …`

remove the semicolon and change it to:

`sendmail+path=/path/to/fakemail`  
`sendmail+path=/path/to/fakemail /path/to/anything.txt`

The first `/path/to/` should be the actual path of the program, while the `fakemail` should be one of the versions below.

The second form allows you to specify the path of the text file. If not specified specified, it defaults to `mail.txt` in the same directory as the `fakemail` program.

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
