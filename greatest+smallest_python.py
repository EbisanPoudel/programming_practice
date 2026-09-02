#find greatest among 3 entered numbers
a=int(input("enter 1st number"))
b=int(input("enter 2nd number"))
c=int(input("enter 3rd number"))

if a >= b and a >= c:
    print("greatest is ",a)
elif b >= a and b >= c:
    print("greatest is ",b)
else:
    print("greatest is",c)

# find smallest among 3 entered numbers

if a <= b and a <= c:
    print("smallest is", a)
elif b <= a and b <= c:
    print("smallest is", b)
else:
    print("smallest is", c)
