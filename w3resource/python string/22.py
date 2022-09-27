# Write a Python program to sort a string lexicographically.

str1=input("enter a string:- ")
s=sorted(str1)
str=""
for i in s:
    str=str+i

print(str)