n=int(input("enter teh value of n"))
r=int(input("enter the value of r"))
if(n<r or r<0):
    print("should be n>=r>=0")
    exit(0)

def fact(t):
    f=1
    for i in range(1,t+1):
        f=f*i
    return f

ncr=fact(n)/(fact(n-r)*fact(r))
print("ncr of n= "+str(n)+" and r= "+str(r)+" is "+str(int(ncr)))

         
