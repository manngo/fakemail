# shendmail

(Shell Sendmail)

A fake sendmail to enable testing of PHP mail functions. It will accept the input and save the results into a text file.

In fact, this is not limited to using as a `sendmail` substitute. It will accept any text which is piped to it and save it.

##	Usage

In php.ini search for:

`;sendmail_path …`

remove the semicolon and change it to:

`sendmail+path=/path/to/shendmail`  
`sendmail+path=/path/to/shendmail /path/to/anything.txt`

The first `/path/to/` should be the actual path of the program, while the `shendmail` should be one of the versions below.

The second form allows you to specify the path of the text file. If not specified specified, it defaults to `mail.txt` in the same directory as the `shendmail` program.

##	Versions

Depending on your preferences, there are 4 versions:

| OS      | Version       | Description          |
|---------|---------------|----------------------|
| MacOS   | shendmail.sh  | Shell Script         |
| MacOS   | shendmail     | Command Line Program |
| Windows | shendmai.bat  | Batch File           |
| Windows | shendmail.exe | Executable           |

Whether you use the Script/Batch or the Program version is a matter of taste.

Note: If you use `shendmail.sh` on MacOS, you need to make sure that you set the permissions to something like `777`.
