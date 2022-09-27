# Write a Python program to find the first non-repeating character in given string


s="aaddac"
str={}
for i in s:
    if i in str:
       str[i]=str[i]+1
    
    else:
        str[i]=1

print(str)
str2=[]
for i in str:
    if str[i]==1:
        str2.append(i)

if len(str2)!=0:
    print(str2[0])
else:
    print("none")



