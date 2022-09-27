# 11. Write a Python program to remove the characters which have odd index values of a given string.

s=input("enter a string:- ")
str=""
for i in range(len(s)):
    if i%2==0:
        str=str+s[i]

print(str)
