n=int(input("enter a digit"))

def digits(num):
    if num<10:
        return num
    else:
        return num%10 + digits(num//10)

print(digits(n))
