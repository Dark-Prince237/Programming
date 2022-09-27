# 22. Write a Python program to count the number 4 in a given list.

list1=[1,2,2,4,4,4,4,3]
# print(list1.count(4))

# method2
count=0
for i in list1:
    if i==4:
        count=count+1

print(count)