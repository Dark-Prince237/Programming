#Write a Python program to count the number of characters (character frequency) in a string.

# Sample String : google.com'
# Expected Result : {'g': 2, 'o': 3, 'l': 1, 'e': 1, '.': 1, 'c': 1, 'm': 1}

a=input("enter a string").replace(" ","")

s={}
for i in a:
    if i in s:
        s[i]=s[i]+1
    
    else:
        s[i]=1

print(s)
