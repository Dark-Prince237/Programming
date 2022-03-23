stri=input("enter a string")

str_split=stri.split()
print(str_split)
for value,i in enumerate(str_split):
    print("word "+str(value)+" is "+i)
count=len(str_split)

print(count)