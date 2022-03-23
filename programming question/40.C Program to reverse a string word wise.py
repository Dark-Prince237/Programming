stri=input("enter a string")

str_split=stri.split()
print(str_split)
str_split.reverse()
print(str_split)
for i in str_split:
    print(i,end=" ")
print("\n")
count=len(str_split)

print("count is "+str(count))