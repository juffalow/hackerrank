#!/bin/python3

import sys

def alternatingCharacters(s):
  previous = None
  count = 0
  for ch in s:
    if previous != None and ch == previous:
      count += 1
    previous = ch

  return count

q = int(sys.stdin.readline().strip())

for line in sys.stdin:
  print(alternatingCharacters(line.strip()))
