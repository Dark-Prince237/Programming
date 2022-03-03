s=input("enter a string")

# method1
#print(s[::-2])

#method 2

# l=len(s)

# i=l-1
# while(i>=0):
#     print(s[i],end="")
#     i=i-1

#method 3

newstr=""
l=len(s)
i=l-1
while(i>=0):
    newstr+=s[i]
    i=i-1

print(newstr)






