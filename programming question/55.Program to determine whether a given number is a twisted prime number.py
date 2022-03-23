n=int(input("enter a number"))
flag=0

for i in range(2,n):
    
    if(n%i==0):
        flag=1
        print("not a prime")
        break
    

if(flag==0): # using flag because like c c++,for not end with i==n when condition failed
    rev=0
    
    while(n!=0):
        t=n%10
        rev=10*rev+t
        n=n//10
    print(rev) 
    for i in range(2,rev):
        if(rev%i==0):
            flag=1
            break
    if(flag==0):
        print("twisted prime")
    else:
        print("not a twisted prime")
        
         
