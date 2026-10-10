#for 5 inputs only 
a = []

i = 0
while i < 5:
    n = int(input("Enter a number: "))
    a.append(n)
    i = i + 1

b = []
count = 0

i = 0
while i < 5:
    found = 0
    j = 0

    while j < count:
        if a[i] == b[j]:
            found = 1
            break

        j = j + 1

    if found == 0:
        b.append(a[i])
        count = count + 1

    i = i + 1

i = 0
while i < count:
    print(b[i], end=" ")
    i = i + 1
