array1=[1,2,3,4,5]

for i in range(len(array1)):
    if(i%2==0):
        print("element at even poistion "+str(i)+" is "+str(array1[i]))
    else:
        print("element at odd poistion "+str(i)+" is "+str(array1[i]))
