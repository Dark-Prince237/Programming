# Write a Python program to find the first appearance of the substring 'not' and 'poor' from a given string, if 'not' follows the 'poor', replace the whole 'not'...'poor' substring with 'good'. Return the resulting string. Go to the editor
# Sample String : 'The lyrics is not that poor!'
# 'The lyrics is poor!'
# Expected Result : 'The lyrics is good!'
# 'The lyrics is poor!'
# Click me to see the sample solution

s= "'The lyrics is not that poor!' 'The lyrics is poor!'"
nfind=s.find("not")
pfind=s.find("poor")
print(nfind)
print(pfind)

s=s.replace(s[nfind:pfind+4],"good")
print(s)

