#!/bin/python3

import sys

def minimumNumber(n, password):
  hasDigit = False
  hasLowercase = False
  hasUppercase = False
  hasSpecial = False
  for letter in password:
    if letter in "0123456789":
      hasDigit = True
    if letter.isupper():
      hasUppercase = True
    if letter.islower():
      hasLowercase = True
    if letter in "!@#$%^&*()-+":
      hasSpecial = True

  digits = 0
  if not hasDigit:
    digits += 1
  if not hasLowercase:
    digits += 1
  if not hasUppercase:
    digits += 1
  if not hasSpecial:
    digits += 1

  return max(digits, 6 - n)

n = int(sys.stdin.readline().strip())
password = sys.stdin.readline().strip()

print(minimumNumber(n, password))
