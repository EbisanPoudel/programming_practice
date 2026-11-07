# # to add new files of this folder to the github do 
# # git add python_prac/filename.py
# # git commit -m "message"
# # git push


#qno1
age=18
#qno2
height=5.7
#qno3
complex=1-2j
#qno4
a=int(input("enter base of triangle"))
b=int(input("enter height of triangle"))
area=0.5*a*b
print(area)
print("area=",area)



#note:way to take multiple input at a time 
#x,y,z=map(float,input("enter three sides").split())


#qno5
x,y,z=map(float,input("enter three sides").split())#map makes the road that the input numbers are float at once 
peri=(x+y+z)
print("perimeter=",peri)


#qno6
length,breadth=map(float,input("enter length adn breadth").split())#keep the .split inside map()
perimeter=2*(length+breadth)
area=length*breadth
print("area=",area,"\n","perimeter=",perimeter)

#qno8
x_coeff=int(input("enter coefficient of x:"))
y_coeff=int(input("enter coefficient of y:"))
constant=int(input("entr the constant term:"))
slope = -x_coeff/y_coeff
x_intercept = -constant/x_coeff
y_intercept = -constant/y_coeff
print("Slope=",slope)
print("X-intercept=",x_intercept,"\n","Y-intercept=",y_intercept,"\n")


#qno9
x1,y1=map(int,input("enter first points").split())
x2,y2=map(int,input("enter second points").split())
slope1=(y2-y1)/(x2-x1)
distance=((x2-x1)**2+(y2-y1)**2)**0.5
print("Slope=",slope1,"\n","Distance=",distance)


#qno10
if slope==slope1:
    print("slopes are boomed")
else:
        print("slope are dumped")


#qno11
i=-10
y=1
while y!=0:
    y=i**2+6*i+9
    i+=1

print((i-1))


#qno12
#A falsy comparison checks whether a value is falsy (such as 0, "", [], None, or False).
str1="python"
str2="dragon"
print("length of python:",len(str1))
print("length of python:",len(str2))
if not len(str1)==len(str2):
    print ("diff length")
else:
    print("same length")



#qno13
if str1.find("on")!=1 and str2.find("on")!=1: #.find() gives the index/position
    print("ON is present")
else:
    print("ON is absent")


#qno14
sentence="i hope this course is not full of jargon"
if sentence.find("jargon")!=1:
    print("JARGON is in sentence")
else:
    print("JARGON is not in sentence")


#qon16
str3="python"
lenpy=float(len(str3))
lenpy1=str(len(str3))
print(lenpy,"\n",lenpy1)


#qno17
number=int(input("enter a number"))
if number%2==0:
    print("even")
else:
        print("odd")
        
        
        
#qno18        
flo=7/3
x=int(2.7)
if flo==x:
    print("equal")
else:
    print("not equal")


#qno19    
if type("10")==type(10):
    print("same")
else:
    print("not same")
    
    
#qno20   
if int(float('9.8'))==10:
        print("equal")
else:
        print("not equal")

#qno21
hours=float(input("enter hours"))
rate=float(input("enter rate per hour"))
print("earning:",(hours*rate))
        
#qno22
age=int(input("enter how many years you have lived?"))
print("you have lived ",(age*365*24*60*60),"seconds.")


#qno23
i = 1
while i <= 5:
    print(i, end="\t")

    j = 0
    while j <= 3:
        print(i ** j, end="\t")#see the c code for better lerning
        j += 1

    print()
    i += 1