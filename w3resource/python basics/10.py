# 10. Write a Python program that accepts an integer (n) and computes the value of n+nn+nnn. Go to the editor
# Sample value of n is 5
# # Expected Result : 615

n=int(input("enter the value of n:- "))
print(n+(n*10+n)+(n*100+n*10+n))