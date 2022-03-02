n=int(input("enter the value of n "))

sum=0

for i in range(1,n+1):
    if i%2==0:
        sum=sum+i

    
print("sum of "+str(n)+" even natural numbers is "+str(sum))