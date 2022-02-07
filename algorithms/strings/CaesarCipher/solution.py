#!/bin/python3

import sys

def caesarCipher(s, k):
    caesar = ""
    for letter in s:
      if not letter.isalpha():
        caesar += letter
      else:
        base = ord("a") if letter.islower() else ord("A")
        number = ((ord(letter) - base) + k) % 26
        caesar += chr(number + base)

    return caesar

n = int(sys.stdin.readline().strip())
s = sys.stdin.readline().strip()
k = int(sys.stdin.readline().strip())

print(caesarCipher(s, k))
