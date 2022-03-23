str1= "Good Morning! Mr. James Potter. Had your breakfast?"
punc=['!', "," ,"\'" ,";" ,"\"", ".", "-" ,"?"]
count=0
for i in range(len(str1)):
    if str1[i] in punc:
        count=count+1
print(count)