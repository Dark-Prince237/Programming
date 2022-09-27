# Write a Python program to get a string from a given string where all occurrences of its first char have been changed to '$', except the first char itself. Go to the editor
# Sample String : 'restart'
# Expected Result : 'resta$t'

# s=input("enter a string:- ")
# c=s[0]
# for i in range(len(s)):
    
#     if s[0]==s[i]:
#        s= s.replace(s[i],"$")
# print(c+s[1:])

# method 2 ------------------------

s=input("enter a string:- ")
d=""
c=s[0]
for i in s[1:]:
    if i ==c:
       
        d=d+"$"

    else:
        d=d+i

print(c+d)




    