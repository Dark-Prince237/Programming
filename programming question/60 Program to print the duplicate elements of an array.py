array1=[9,4,9,9,5,4,5,4,7,1,2,4,1,8,3,3]


for i in range(len(array1)):
   count=1
   visited=-1
   
   for j in range(i+1,len(array1)):
       

       if(array1[i]==array1[j] and array1[i]!=-1):
            print(array1[i])
            array1[j]=visited
            break
           
            

   
  



