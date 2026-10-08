list=[]
n=int(input("how many numbers ?"))
i=0
list2=[]
while i<n:
    list.append(int(input()))
    i=i+1

print(list)
i=0
while i!=n:
     list[i]=list[n-1]
     list[n-1]=list[i]
     i=i+1
     n=n-1

print(list)