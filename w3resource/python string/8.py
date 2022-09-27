#   Write a Python function that takes a list of words and return the longest word and the length of the longest one.
# Sample Output:
# Longest word: Exercises
# Length of the longest word: 9
def longest(l):
    s=0
    for i in l:
        if len(i)>s:
            s=len(i)
    
    for i in l:
        if len(i)==s:
            return("Longest word: "+i +"\n"+ "Length of the longest word: "+str(len(i)) )
l=[]
n=int(input("enter the inputs:- "))

for i in range(n):
    d=input("enter a string:- ")
    l.append(d)

print(longest(l))
