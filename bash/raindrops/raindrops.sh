#!/usr/bin/env bash

if (( $1 % 3 == 0 )); then
    result+="Pling"
fi
if (( $1 % 5 == 0 )); then
    result+="Plang"
fi
if (( $1 % 7 == 0 )); then
    result+="Plong"
fi
# if the result is empty, then add the number to the result
if [[ -z $result ]]; then
    result+="$1"
fi
echo "$result"
