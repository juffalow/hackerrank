#!/bin/python3

import sys
import math

def sumXor(n):
  count = 0
  number = 1
  while (number <= n):
    if n & number == 0:
      count += 1
    
    number *= 2
  
  result = 1
  for i in range(1, count + 1):
    result += math.factorial(count) / (math.factorial(i) * math.factorial(count - i))

  return int(result)

n = int(sys.stdin.readline().strip())
print(sumXor(n))
