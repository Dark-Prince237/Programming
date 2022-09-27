# 49. Write a Python program to count and display the vowels of a given text.

str1="w3resource"

vowels="aeiou"
count=0
for i in str1:
    if i in vowels:
        print(i,end=" ")
        count=count+1

print(count)