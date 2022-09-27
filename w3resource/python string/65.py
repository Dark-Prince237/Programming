# Find all the common characters in lexicographical order from two given lower case stringsstr1 = 'Python'

str1='w3resource'
str2 = 'python and swift'

str3=sorted(str1,key=str.lower)
str4=sorted(str2,key=str.lower)
print(str3)
print(str4)

str=""

for i in str3:
    if i in str4:
        str=str+i
print(str)
