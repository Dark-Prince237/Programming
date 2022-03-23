# array1=[1,1,5,1,3]
# max=0


# for i in range(len(array1)):
#     for j in range(i+1,len(array1)):
#         if array1[j]>array1[i] and array1[j]>max:
#             max=array1[j]
        
# print(max) 

array1=[1,8,5,11,3]
max=array1[0]

for i in range(len(array1)):
    if(array1[i]>max):
        max=array1[i]
print(max)
