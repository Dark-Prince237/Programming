#  Write a Python program to get a single string from two given strings, separated by a space and swap the first two characters of each string. Go to the editor
# Sample String : 'abc', 'xyz'
# Expected Result : 'xyc abz'

str1=input("enter string 1")
str2=input("enter string 2")

print(str2[0:2]+str1[2:]+" "+str1[0:2]+str2[2:])