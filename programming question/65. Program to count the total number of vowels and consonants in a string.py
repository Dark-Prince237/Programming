str1="This is a really simple sentence" 
punc=['a','i','e','o','u','A','E','I','O','U']
count=0
count2=0
for i in range(len(str1)):
    if str1[i] in punc:
        print("v="+str1[i])
        count=count+1
    elif (str1[i] >= 'a' and str1[i] <= 'z' or str1[i] >= 'A' and str1[i] <= 'Z'):
        count2=count2+1
        print("c= "+str1[i])
print("vowels are "+str(count))
print("consonants are "+str(count2))