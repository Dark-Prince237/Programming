str1="acbdfghybdfh"
comp=[]


for i in range(len(str1)):
    arr=[]
    for j in range(i+1,len(str1)):
        if(str1[i]==str1[j]):
            
            while(str1[i]==str1[j]):
                arr.append(str1[i])
                print(arr)
                print(str1[j])
                j=j+1

# comp.append(arr) 
# print(comp)



