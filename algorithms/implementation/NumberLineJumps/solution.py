#!/bin/python3

import sys

def kangaroo(x1, v1, x2, v2):
  if v1 <= v2:
    return "NO"
  
  return "YES" if ((x1 - x2) % (v2 - v1) == 0) else "NO"

s = sys.stdin.readline().strip().split()
x1 = int(s[0])
v1 = int(s[1])
x2 = int(s[2])
v2 = int(s[3])

print(kangaroo(x1, v1, x2, v2))
