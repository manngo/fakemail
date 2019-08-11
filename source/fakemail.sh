#!/bin/bash

#	================================================
#	fakemail.sh
#	Command Line Usage:
#		echo … | fakemail.sh
#		echo … | fakemail.sh /path/to/file.txt
#	php.ini Usage:
#		sendmail_path /path/to/fakemail.sh
#		sendmail_path /path/to/fakemail.sh /path/to/file.txt
#	You may need to
#		chmod 744 fakemail.sh
#	================================================

DIR=$(dirname "$0");
FILE="${DIR}/mail.txt"

if [ -z "$1" ]; then
	FILE="${DIR}/mail.txt"
else
	FILE="$1"
fi

echo ================================================ >> "$FILE"
date >> "$FILE"
echo ------------------------------------------------ >> "$FILE"
while read LINE
do
	echo "$LINE" >> "$FILE"
done
echo ------------------------------------------------ >> "$FILE"
echo >> "$FILE"
