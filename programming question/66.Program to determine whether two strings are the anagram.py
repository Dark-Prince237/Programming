str1 = input("enter a string 1:-")
str2 = input("enter a string 2:-")

if(len(str1)!=len(str2)):
    print("not a anagram")

else:

    str1=str1.lower()
    str2=str2.lower()

    str1=sorted(str1)
    str1=''.join(str1)

    str2=sorted(str2)
    str2=''.join(str2)

    if(str1==str2):
        print("anagram")
    else:
        print("not an anagram")
    

        

 