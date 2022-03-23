str1="big black bug bit a big black dog on his big black nose"

str2=str1.split(" ")

# print(str2)
visited=-1
for i in range(len(str2)):
    count=0
    for j in range(i+1,len(str2)):
       
        if(str2[i]==str2[j]):
            count=count+1
            str2[j]=visited
            
            if(str2[i]!=-1 and count== 1):
                print(str2[i])  
            
