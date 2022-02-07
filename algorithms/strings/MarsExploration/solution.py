#!/bin/python3

import sys

def marsExploration(s):
    diff = 0
    for index, letter in enumerate(s):
      if letter != "SOS"[index % 3]:
        diff += 1

    return diff

s = sys.stdin.readline().strip()

print(marsExploration(s))
