# 24. Write a Python program to test whether a passed letter is a vowel or not. 

# vowel=["a","e","i","o","u"]
vowel="aeiou"

letter=input("enter a letter:- ")
if letter in vowel:
    print("it is vowel")
else:
    print("it is not a vowel")