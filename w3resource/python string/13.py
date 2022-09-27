# 13. Write a Python script that takes input from the user and displays that input back in upper and lower cases. 

s=input("enter a string")
str1=s.split(" ")
str2=""
for i in str1:
    if i.isupper():
        i=i.lower()
        str2=str2+i+" "
    else:
        i=i.upper()
        str2=str2+i+" "

print(str2)