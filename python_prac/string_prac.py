#string formatting
#old style string formatting 

# Strings only
first_name = 'ebisan'
last_name = 'poudel'
language = 'Python'
formated_string = 'I am %s %s. I teach %s' %(first_name, last_name, language)
print(formated_string)

# Strings  and numbers
radius = 10
pi = 3.14
area = pi * radius ** 2
formated_string = 'The area of circle with a radius %d is %.2f.' %(radius, area) # 2 refers the 2 significant digits after the point

python_libraries = ['Django', 'Flask', 'NumPy', 'Matplotlib','Pandas']
formated_string = 'The following are python libraries:%s' % (python_libraries)
print(formated_string) # "The following are python libraries:['Django', 'Flask', 'NumPy', 'Matplotlib','Pandas']"



print("\n")

#new style string formatting (str.format)
#syntax sort of thing
#formated_string = 'I am {} {}. I teach {}'.format(first_name, last_name, language)
#{} =where to put the string 
#.format( ,   ,  ,)  hya chai ka ka lai serially rakhni bhanni lekhni 

first_name = 'ebisan'
last_name = 'poudel'
language = 'Python'
formated_string = 'I am {} {}. I teach {}'.format(first_name, last_name, language)
print(formated_string)
a = 4
b = 3

print('{} + {} = {}'.format(a, b, a + b))
print('{} - {} = {}'.format(a, b, a - b))
print('{} * {} = {}'.format(a, b, a * b))
print('{} / {} = {}'.format(a, b, a / b)) #   floating division
print('{} % {} = {}'.format(a, b, a % b))
print('{} // {} = {}'.format(a, b, a // b))#integer division
print('{} ** {} = {}'.format(a, b, a ** b))#power a^b



# Strings  and numbers
radius = 10
pi = 3.14
area = pi * radius ** 2
formated_string = 'The area of a circle with a radius {} is {}.'.format(radius, area) 
print(formated_string)


print("\n")
#important to focus 
#String Interpolation / f-Strings (Python 3.6+)
#Another new string formatting is string interpolation, f-strings. Strings start with f and we can inject the data in their corresponding positions.
#synatx sort off
#full_nmae="ebisan"
# language=f"my name {full_name}"
#print(f"my name is {full_nmae}")
name1="ebisan"
age=18
grade="bachlor"
height=5.7
print(f"my name is {name1}. i am {age} old. i study {grade}.i am {height}ft tall")
a = 4
b = 3
print(f'{a} + {b} = {a +b}')
print(f'{a} - {b} = {a - b}')
print(f'{a} * {b} = {a * b}')
print(f'{a} / {b} = {a / b}')
print(f'{a} % {b} = {a % b}')
print(f'{a} // {b} = {a // b}')
print(f'{a} ** {b} = {a ** b}')


print("\n")
#unpacking the string characters
#hya chai hamla dako string ko one by one character lai diff variable ma rakhako xam 
language = 'Python'#string ho aayueo
a,b,c,d,e,f = language # unpacking sequence characters into variables...
#hya aagadi ko variables ma language ma bhako string ko character one by one variables ma bas dai xa 
print(a) # P
print(b) # y
print(c) # t
print(d) # h
print(e) # o
print(f) # n

print("\n")
#indexing la string lai access garni 
#In programming counting starts from zero. Therefore the first letter of a string is at zero index and the last letter of a string is the length of a string minus one.
language = 'Python'
#hya '0' indexing ma :p: xa aani '1' indexing ma :y: xa and respectively 
first_letter = language[0]
print(first_letter) # P
second_letter = language[1]
print(second_letter) # y

#last indexing ko element lai if string ko length tha xaina bhana '-1' garda last ko indexing denote hunxa 
#second last ko lagi chia '-2' and similarly hunxa
#-1 is the last index. 
last_letter = language[-1]
print(last_letter) # n


#slicing of the string
#it measn kai part bata start huni aani kai decided part ma end huni gari data extraction
print("\n")

#example 1 

b="ebisan poudel"
b1=b[1]#indexing 
print(b1)
print(b[1:5])  #slicing 5 index bhaya ni -1 samma aayuxa

print(b[:4])  #b[0:4]
print(b[5:])  #b[5:len(b)]


#example 2
language = 'Python'
first_three = language[0:3] # starts at zero index and up to 3 but not include 3
print(first_three) #Pyt
last_three = language[3:6]
print(last_three) # hon
# Another way
last_three = language[-3:]
print(last_three)   # hon
last_three = language[3:]
print(last_three)   # hon

print("\n")
#reversing the string 
greeting = 'Hello, World!'
print(greeting[::-1]) # !dlroW ,olleH
#syntax chai ka bho bhanda [start:stop:step]    
#-1 la garda back bata start bhako ho 
#1 bhako bha start first bata hutho ,,,step forst bata start

# Start is empty → Python automatically starts from the end when stepping backwards.
# Stop is empty → Python continues to the beginning.
# Step is -1 → Move backwards one character at a time


print("\n")
#skipping Characters While Slicing
#It is possible to skip characters while slicing by passing step argument to slice method.
language = 'Python'
pto = language[0:6:2] #
print(pto) # Pto