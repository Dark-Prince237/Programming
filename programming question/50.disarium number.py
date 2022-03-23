n=int(input("enter a n"))
str_n=str(n)
l=len(str_n)
k=l
d=n
sum=0

while(n!=0):
    t=n%10
    sum=sum+(t**k)
    k=k-1
    n=n//10
if d==sum:
     print("disarium")




