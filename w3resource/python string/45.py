# Write a Python program to check whether a string contains all letters of the alphabet.

str1="The quick brown fox jumps over the lazy dog"

check="abcdefghijklmnopqrstuvwxyz"
count=0
for i in check:
    if i in str1:
        count=count+1
        
if count==26:
    print("True")    
else:
    print("False")