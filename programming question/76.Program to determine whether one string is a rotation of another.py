str1="abcde"

str2="deabc"

str1=str1+str1
print(str1)

if str2 in str1:
    print("rotation")
else:
    print("no rotation")