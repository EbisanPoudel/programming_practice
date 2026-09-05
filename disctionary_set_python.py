#disctionary in python
# syntax= disc={
#"key":"value"
#}


disc ={
  "name":"ebisan",
  "age":18,
  "gender":"male",
  "study":"bachlors",
  "subject":["math","physic","chemistry","computer"]
}

print(disc)
print("\n")
print(type(disc))
print("\n")
print(disc["name"])
print("\n")
disc["name"]="aashish"
print(disc)
print("\n")
print(disc["subject"])
print("\n")
disc["surnmae"]="poudel"
print(disc)
print("\n")
#nested disctionary
disc1={
  "name":["ebisan","aashish","gita"],
  "surnmae":("poudel","poudel","poudel"),
  "marks":{
  "physic":[98,97,96],
  "math":[99,98,97],
  'chemistry':[98,97,96],
  }
}
print("\n")
print(disc1)
print("\n")


print(disc.keys())#print the keys of disc
print("\n")
print(disc.values())#print the values of key
print("\n")
x=list(disc)#prints the keys of disc
print(x)
print("\n")

print(disc1.keys())#print the keys of disc1
print("\n")
print(disc1.values())#print the values of key
print("\n")
x=list(disc1)#prints the keys of disc1
print(x)
print("\n")
print(disc1["marks"])
