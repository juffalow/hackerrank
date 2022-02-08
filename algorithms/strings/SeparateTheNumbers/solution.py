#!/bin/python3

import sys

def separateNumbers(s):
  if len(s) == 1:
    return "NO"

  number = 0
  for ch in s:
    number = number * 10 + int(ch)

    index = len(str(number))
    next = number + 1

    while (index < len(s)):
      if int(s[index: index + len(str(next))]) != next:
        break
      index += len(str(next))
      next += 1

    if index >= len(s) and number != int(s):
      return "YES " + str(number)
  
  return "NO"


q = int(sys.stdin.readline().strip())

for line in sys.stdin:
  print(separateNumbers(line.strip()))
