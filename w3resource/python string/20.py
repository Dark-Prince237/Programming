# 20. Write a Python function to reverses a string if it's length is a multiple of 4. 

str1=input("enter the string:- ")
n=len(str1)
print("length of string is "+str(n))
if n%4==0:
    print(str1[::-1])