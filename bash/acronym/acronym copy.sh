#!/usr/bin/env bash
echo "$1" |
tr -d "'" |
# insert newline after each non-alphabetic character
# because -c is complement, so it's the reverse group
tr -c 'a-zA-Z' '\n' |
# only take the first character of each line
cut -c1 |
# convert to uppercase
tr 'a-z' 'A-Z' |
# remove newline
tr -d '\n'