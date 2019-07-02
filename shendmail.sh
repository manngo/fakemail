#!/bin/bash
#	chmod 744 sendmail.sh
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
