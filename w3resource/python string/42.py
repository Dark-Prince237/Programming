# 42. Write a Python program to count repeated characters in a string. Go to the editor
# Sample string: 'thequickbrownfoxjumpsoverthelazydog'
# Expected output :
# o 4
# e 3
# u 2
# h 2
# r 2
# t 2

string='thequickbrownfoxjumpsoverthelazydog'

dict={}

for i in string:
    if i in dict:
        dict[i]=dict[i]+1

    else:
        dict[i]=1

# print(dict)

dict2={}

for i in dict:
    if dict[i]>=2:
        dict2[i]=dict[i]

# print(dict2)

for i,j in dict2.items():
    print(i,j)