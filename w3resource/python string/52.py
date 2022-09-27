# str="xyz"
# str1=list(str)
# list1=[]
# for i in str1:
#     list2=[]
#     list2.append(i)

#     for j in str1:
#         if i!=j:
#             list2.append(j)
#     list1.append(list2)

# print(list1)
from itertools import product


p=product("xyz",repeat=3)

for i in p:
    print(i)

