import getpass as gp

    while 1:
        x.split()
        b = []
        for i in range(len(x)):
            y =(x[i]).replace(x[i],"*")
            b.append(y)
        return b


x = gp.getpass()
z =inp(x)
print(*z)
f = gp.getpass("\nConfirm Password")
h = inp(f)
print(*h)

if x==f:
    print("\nPassword Match")
else:
    print("\nPassword Unmatched")


