# 12. Write a Python program to count the occurrences of each word in a given sentence. 

sentence="this is the is of rashid"
sen=sentence.split(" ")
dict1={}
for i in sen:
    if i not in dict1:
        dict1[i]=1
    else:
        dict1[i]=dict1[i]+1
print(dict1)
