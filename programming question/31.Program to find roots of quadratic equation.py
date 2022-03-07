print("enter the value of a ,b and c in quadratic equation\n")
a=int(input("enter a value of a:- "))
b=int(input("enter a value of b:- "))
c=int(input("enter a value of c:- "))

D=(b*b)-(4*a*c)

if(D<0):
    print("no roots\n")

elif(D>0):
    print("roots are real and distinct")
    x=(-b+D)/(2*a)
    y=(-b-D)/(2*a)
    print("roots are ",x," or ",y)
    
else:
    print("equal roots")
    print("roots are ",(-b/(2*a)))