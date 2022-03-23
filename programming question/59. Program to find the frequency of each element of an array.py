array1=[9,4,9,9,5,4,5,4,7]


for i in range(len(array1)):
   count=1
   visited=-1
   
   for j in range(i+1,len(array1)):
       

       if(array1[i]==array1[j]):
            count=count+1
            array1[j]=visited
            

   
   if(array1[i]!=visited):
    print("no. is "+str(array1[i] ))
    print("count is "+str(count))




