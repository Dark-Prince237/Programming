#  Write a Python program to add 'ing' at the end of a given string (length should be at least 3). If the given string already ends with 'ing' then add 'ly' instead. If the string length of the given string is less than 3, leave it unchanged. Go to the editor
# Sample String : 'abc'
# Expected Result : 'abcing'
# Sample String : 'string'
# Expected Result : 'stringly'

s=input("enter the string")
d=len(s)
if d<3:
    print(s)
else:
    if s[d-3:d]=="ing":
       s= s+"ly"

    else:
        s=s+"ing"

print(s)