#!/bin/python3

import sys

def xorSum(n):
  d = n % 8
  number = 0
  if d == 0 or d == 1:
    number = n
  if d == 2 or d == 3:
    number = 2
  if d == 4 or d == 5:
    number = n + 2
  if d == 6 or d == 7:
    number = 0
  
  return number

def xorSequence(l, r):
  return xorSum(l - 1) ^ xorSum(r)

q = int(sys.stdin.readline().strip())
for line in sys.stdin:
  lr = line.strip().split()
  l = int(lr[0])
  r = int(lr[1])
  print(xorSequence(l, r))
