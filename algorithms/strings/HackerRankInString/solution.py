#!/bin/python3

import sys

def hackerrankInString(s):
  rank = []
  for letter in s:
    if letter in "hackerrank" and letter == "hackerrank"[len(rank)]:
      rank.append(letter)

    if len(rank) == len("hackerank"):
      return "YES"

  return "NO"

q = sys.stdin.readline().strip()

for line in sys.stdin:
  print(hackerrankInString(line))
