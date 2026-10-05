count = 0
n = int(input("Enter how many numbers: "))
list = []
i = 0

print("Enter numbers:")
while i < n:
  list.append(int(input()))
  i = i + 1
# END while i < n

print(list)
list1 = list.copy()

i = 0
j = 0

while j < n:
  count = 0
  i = 2

  if list[j] == 1:
    print("Neither prime nor composite =", list[j])

  elif list[j] < 1:
    print("Invalid input =", list[j])

  else:
    while i < list[j]:
      if list[j] % i == 0:
        count = 1
        break

      i = i + 1
    # END while i < list[j]

    if count == 0:
      list1[j] = "prime"
    else:
      list1[j] = "not prime"
    # END if/else

  j = j + 1
# END while j < n

x = 0
while x < n:
  if list1[x] == "prime":
    print("Prime =", list[x])
  x = x + 1
# END while x < n

x = 0
while x < n:
  if list1[x] == "not prime":
    print("Not prime =", list[x])
  x = x + 1
# END while x < n6