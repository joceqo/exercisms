#!/usr/bin/env bash
# if no arguments are passed, or if the argument is only whitespace
if [[ -z "$1" ]] || [[ "$1" =~ ^[[:space:]]+$ ]]; then
  echo "Fine. Be that way!"
  exit 0
fi

# if the argument is all uppercase and contains no lowercase letters and ends with a question mark
if [[ "$1" =~ [A-Z] ]] && [[ ! "$1" =~ [a-z] ]] && [[ "$1" =~ \?$ ]]; then
  echo "Calm down, I know what I'm doing!"
  exit 0
fi
# if the argument is all uppercase and contains no lowercase letters
if [[ "$1" =~ [A-Z] ]] && [[ ! "$1" =~ [a-z] ]]; then
  echo "Whoa, chill out!"
  exit 0
fi

# if the argument ends with a question mark or ends with whitespace and contain question mark
if [[ "$1" =~ \?$ ]] || ([[ "$1" =~ [[:space:]]$ ]]  &&  [[ "$1" =~ \? ]]); then
  echo "Sure."
  exit 0
fi

echo "Whatever."
exit 0