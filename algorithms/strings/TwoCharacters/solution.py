#!/bin/python3

import sys

def alternate(s):
  letters = set(s)
  maximum = 0
  for l1 in letters:
    for l2 in letters:
      word = ""
      for ch in s:
        if ch == l1 or ch == l2:
          word += ch
      
      if word.replace(l1 + l1, "") != word:
        continue
    
      if word.replace(l2 + l2, "") != word:
        continue

      if len(word) == 1:
        continue

      maximum = max(len(word), maximum)

  return maximum

l = int(sys.stdin.readline().strip())
s = sys.stdin.readline().strip()

print(alternate(s))
