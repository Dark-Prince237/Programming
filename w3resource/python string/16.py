# 16. Write a Python function to insert a string in the middle of a string. Go to the editor
# Sample function and result :
# insert_sting_middle('[[]]<<>>', 'Python') -> [[Python]]
# insert_sting_middle('{{}}', 'PHP') -> {{PHP}}

def middle(string,value):
    return string[0:(len(string)//2)]+value+string[(len(string)//2):len(string)+1]



string=input("enter a string:- ")
value=input("enter the value:- ")
print(middle(string,value))