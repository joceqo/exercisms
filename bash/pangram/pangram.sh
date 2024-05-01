#!/usr/bin/env bash

if [[ -z $1 ]]; then
  echo "false"
  exit 0
fi

lowercase_arg=$(echo $1 | tr '[:upper:]' '[:lower:]')
alphabet="abcdefghijklmnopqrstuvwxyz"
for ((i = 0; i < ${#alphabet}; i++)); do
  letterInInput=false
  for ((j = 0; j < ${#lowercase_arg}; j++)); do
    if [[ ${alphabet:$i:1} == ${lowercase_arg:$j:1} ]]; then
      letterInInput=true
      break
    fi
  done
  if [[ $letterInInput == false ]]; then
    echo "false"
    exit 0
  fi
done
echo "true"
