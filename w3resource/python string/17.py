# 17. Write a Python function to get a string made of 4 copies of the last two characters of a specified string (length must be at least 2). Go to the editor
# Sample function and result :
# insert_end('Python') -> onononon
# insert_end('Exercises') -> eseseses


def copy(string):

    if len(string)>=2:
        return string[len(string)-2:]*4



string=input("enter a string")
print(copy(string))