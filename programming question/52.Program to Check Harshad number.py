from re import T


n=int(input("enter a number"))
h=n
sum=0
while(n!=0):
    t=n%10
    sum=sum+T
    n=n//10

if(h%sum==0):
    print("harshad number")
else:
    print("not a harshad number")
