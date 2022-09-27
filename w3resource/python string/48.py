# 48. Write a Python program to swap comma and dot in a string.
# Sample string: "32.054,23"
# Expected Output: "32,054.23"

str1="32.054,23"
str2=""
for i in str1:
    if i==".":
        str2=str2+","
    elif i==",":
        str2=str2+"."
    else:
        str2=str2+i
print(str1)
print(str2)
