a = 0
b = 1
i = 1

n = int(input("Enter no of iteration: "))

print(a, end=",")
print(b, end=",")
while i <= n:
    c = a + b
    print(c, end=",")
    a = b
    b = c
    i = i + 1

print("\n")

