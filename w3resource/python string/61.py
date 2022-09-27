# 61. Write a Python program to remove duplicate characters of a given string. 

# str="python exercises practice solution"
str="w3resource"

str2=""

for i in str:
    if i in str2:
        pass
    else:
        str2=str2+i
        

print(str2)