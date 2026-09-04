#LIST IN PYTHON

list = ["ebisan","poudel",18,"bachlor","software engineering","pu"]
print(list)
print(list[2])
print(type(list))
print(len(list))
print(list[1:3])
list[0]="Ebisan" #its mutating character
list[1]="Poudel"# we can change the value of certain indexing
print("\n")

list.append("single")#add a new element at the last of list
print(list)
print("\n")

list1=[10,98,65,220,1,6,9,8,26,59,49,36,25,95,9+7,32,22.1,22.2,22.02]
list1.sort() #sorting list in ascending order
print(list1)
print("\n")

list1.sort(reverse=True)#sorting list in descending order
print(list1)
print("\n")

list.insert(3,"2065-02-11")#insertinf at certain index of the list   
#syntax=  list.insert(index,element)
print(list)
print("\n")

list.pop(5)#remove a element of certain index
print(list)
#synatx list.pop(index)
print("\n")

list.insert(5,"Pokhara University")
print(list)
print("\n")
print("\n")
print("\n")

#TUPPLE IN PYTHON

tupple=()

#LIST PRACTICE
#enter 3 movie nmaes adn add in a list

movie=[]
movie.append(input("enter first movie"))
movie.append(input("enter second movie"))
movie.append(input("enter third movie"))
print(movie)
print("\n")

#find if given list is palindrom or not
list=[1,2,"ebisan","poudel",3,1]
list1=list.copy()
list1.reverse()
if(list == list1):
 print("boom")
else:
  print("xi lanat ha ")
print("\n")

  #tupple ko question
#count no of "a"
tupple_std=("a","x","a","t","a")
print(tupple_std.count("a"))

  

