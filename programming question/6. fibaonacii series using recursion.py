def fib(x):
    if x==1:
        return 0
    elif x==2:
        return 1
    else:
        return fib(x-1)+fib(x-2)   

n=int(input("enter the value of n:-"))
for i in range(1,n+1):
    f=fib(i)
    print(f," ",end="")
