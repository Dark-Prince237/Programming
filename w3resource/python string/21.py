# 21. Write a Python function to convert a given string to all uppercase if it contains at least 2 uppercase characters in the first 4 characters.




def copy(string):

   n=string[0:4]
   count=0
   for i in n:
     
       if i.upper()==i:
           count=count+1
   if count>=2:
       return(string.upper())
   else:
        return(string)

  



string=input("enter a string")
print(copy(string))