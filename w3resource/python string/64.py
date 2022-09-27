# Write a Python program to find maximum length of consecutive 0’s in a given binary string.

str1 = '111000111'
s=[]
for i in range(len(str1)):
    count=0
    if str1[i]=="0":
        
        for j in range(i+1,len(str1)):
            if str1[j]=="0":
                count=count+1
            else:
               s.append(count)
               break
print(max(s)+1)
                

