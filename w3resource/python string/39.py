# 39. Write a Python program to reverse a string.

str1="rashid"
str=""

for i in range(len(str1)-1,-1,-1):
    print(i)
    str=str+str1[i]

print(str)
