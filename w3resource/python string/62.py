# Compute sum of digits of a given string

# str="123abcd45"
str="abcd1234"
str2=""
sum=0
for i in str:
    if i.isdigit():
        sum=sum+int(i)
        
print(sum)

