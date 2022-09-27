def remove_zeros_from_ip(ip_add):
    l="123456789"
    str=""
    for i in range(len(ip_add)):
        if ip_add[i]=="0" and ip_add[i+1] in l:
            str=str+""
        else:
            str=str+ip_add[i]
    return str





    # return str;

print(remove_zeros_from_ip("255.024.01.01"))
print(remove_zeros_from_ip("127.0.0.01 "))