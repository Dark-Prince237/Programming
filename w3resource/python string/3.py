#  Write a Python program to get a string made of the first 2 and the last 2 chars from a given a string. If the string length is less than 2, return instead of the empty string. Go to the editor
# Sample String : 'w3resource'
# Expected Result : 'w3ce'
# Sample String : 'w3'
# Expected Result : 'w3w3'
# Sample String : ' w'
# Expected Result : Empty String

s=input("enter a string:- ")
l=len(s)
if l>=2:
    print(s[0:2]+s[l-2:l])
    
else:
    print("Empty String")
