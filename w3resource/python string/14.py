# 14. Write a Python program that accepts a comma separated sequence of words as input and prints the unique words in sorted form (alphanumerically).
# Sample Words : red, white, black, red, green, black
# Expected Result : black, green, red, white,red

a=input("enter a strings:- ")
b=a.split(",")
str=""
str2=""

for i in b:
    if i not in str2:
        str2=str2+i+" "

c=str2.strip()
c=c.split(" ")
for i in range(len(c)):
    for j in range(len(c)):
        if c[j]>c[i]:
            k=c[i]
            c[i]=c[j]
            c[j]=k

str3=""
for i in c:
    if c[-1]==i:
         str3=str3+i
    else:
         str3=str3+i+","
   
print(str3)

