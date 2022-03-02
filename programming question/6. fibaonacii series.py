a,b,c=-1,1,0
n=int(input("enter the value of n:-"))

for i in range(1,n+1):
    c=a+b
    print(c," ",end="")
    a=b
    b=c