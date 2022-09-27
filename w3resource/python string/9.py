# Write a Python program to remove the nth index character from a nonempty string

# s=input("enter the string:- ")
# index=int(input("enter the index to remove:- "))
# print(index)
# print(s[:index]+s[index+1:])



# method2
# ------------

# s=input("enter the string:- ")
# index=int(input("enter the index to remove:- "))

# s=s.replace(s[index],"")
# print(s)



# method3
# ------------

s=input("enter the string:- ")
index=int(input("enter the index to remove:- "))
str=""
for i in s:
    if s[index]!=i:
        str=str+i

print(str)
