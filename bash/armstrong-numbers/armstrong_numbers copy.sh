#!/usr/bin/env bash

num=$1
len=${#num}
total=0

for ((i=0; i<$len; i++)); do
	total=$((total + (${num:$i:1}**len) ))
done

[[ $total -eq $num ]] && echo "true" || echo "false"