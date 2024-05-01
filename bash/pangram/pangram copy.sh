#!/usr/bin/env bash
ucnt=$(echo ${1,,} | grep -o [a-z] | sort -u | wc -l)
(( ucnt == 26 )) && echo 'true' || echo 'false'
