# 41. Write a Python program to strip a set of characters from a string.

str1="The quick brown fox jumps over the lazy dog."
# 
c= "aeiou"

for i in c:
    str2=str1.split(i)
    # print(str2)
    str1="".join(str2)

print(str1)