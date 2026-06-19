t = (1,2,2,2,3)
print(t.count(2)) #3

first_occurance = t.index(2)
print(first_occurance)

print(len(t))

print(3 in t)

#concatenation
t1 = (1,2)
t2 = ( 2,3,4)
t3 = t1 + t2
print(t3)

#repetition
t = (1,2)
print(t*3)#(1, 2, 1, 2, 1, 2)

#slicing
t = (10,20,30,40)
print(t[1:3])  #include index 1 , exclude index 3
#o/p : (20,30)

#Packing and Unpacking
person = "Abhay" , 25 , "pune"
print(person)

#unpacking
name , age , city = person
print(f'Name : {name}')
print(f'age : {age}')
print(f'city : {city}')

#Extended Unpacking
numbers = (1,2,3,4,5)
a , *middle , b = numbers
print(a) #1
print(middle) #[2,3,4]
print(b) #5

#nesting of two tuples
tup1 = (0,1,2,3)
tup2 = ('python','java')
tup3 = (tup1,tup2)
print(tup3)  #((0, 1, 2, 3), ('python', 'java'))

#all() vs any()
t = ()

print(all(t))  #True
print(any(t)) #False

#enumerate()
t = (10,20,30,40)

for idx , value in enumerate(t):
    print(idx , value)


#update list inside tuple
t = ([1,2] , [3,4])
t[0].append(5)
print(t)
t[0][2] = 6
print(t)