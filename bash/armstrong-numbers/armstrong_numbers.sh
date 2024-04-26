#!/usr/bin/env bash

# Convert the input number to a space-delimited string of digits
spaceDelimitedNumeral=$(echo $1 | sed 's/\(.\)/\1 /g')

# Initialize a counter variable
index=0
# Iterate over each digit
for numeral in $spaceDelimitedNumeral; do
  total=$((total + numeral ** ${#1}))
  # Increment the counter
  ((index++))
done

[[ $total -eq $1 ]] && echo "true" || echo "false"