array1=[1,2,3,5]
# array2=array1
print("array 1 is")
print(array1)
array2=[]
for i in array1:
    array2.append(i)
array1.append(2)
print("array 1 after update is")
print(array1)
print("array 2 is")
print(array2)