# Find the second most repeated word in a given string
s="Both of these issues are fixed by postponing the evaluation of annotations. Instead of compiling code which executes expressions in annotations at their definition time, the compiler stores the annotation in a string form equivalent to the AST of the expression in question. If needed, annotations can be resolved at runtime using typing.get_type_hints(). In the common case where this is not required, the annotations are cheaper to store (since short strings are interned by the interpreter) and make startup time faster."
s=s.split(" ")
str={}
for i in s:
    if i in str:
       str[i]=str[i]+1
    
    else:
        str[i]=1

max_value=max(str,key=str.get)
print(max_value)


