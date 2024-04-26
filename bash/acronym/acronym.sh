#!/usr/bin/env bash

# remove hyphens, //x/y replaces all x with y
words=${1//-/ }
# remove all punctuation
words=${words//[[:punct:]]/}
# split at each whitespace character
for word in $words; do
    # take the first one
    acronym+=${word:0:1}
done
# parameter expansion only works in bash 4.0+
# default macos bash is 3.2
# echo "${acronym^^}"
acronym=$(echo "$acronym" | tr '[:lower:]' '[:upper:]')
echo "$acronym"