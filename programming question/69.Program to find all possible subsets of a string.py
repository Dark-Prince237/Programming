str1="AABC"

for i in range(len(str1)):
    arr=[]
    for j in range(i,len(str1)):
        arr.append(str1[j])
        
        print("".join(arr))
