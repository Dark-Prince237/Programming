# 7. Write a Python program to accept a filename from the user and print the extension of that. Go to the editor
# Sample filename : abc.java
# Output : java

fileName=input("enter the file name:- ")
fileName_ext=fileName.split(".")
print(fileName_ext[-1])