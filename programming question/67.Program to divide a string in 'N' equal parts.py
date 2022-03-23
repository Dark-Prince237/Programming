str1 = input("enter a string:-")
n=int(input("enter the value of n"))    

if (len(str1)%n==0):

    if len(str1)%2==0:
        for i in range(len(str1)):
         print(str1[0:n])
         str1=str1[n:]
         if(len(str1)==0):
             break;
    else:
         print("cannot be divide in n part")
else:
    print("cannot be divide in n part")

