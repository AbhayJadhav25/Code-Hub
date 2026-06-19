# Tuple
~Ordered , immutable sequence of objects.
~can store different types of value.
~allows duplicate values
~support indexing and slicing
~can't add or remove
~ it remains fixed
~python actually returns a tuple when we returns more than 1 value .

## Why immutable
t = (10,20,30)
t[0] = 100 ---> python does not allows reassignment it raise TypeError
### reasons 
1) Safety -> Data should not change can be protected.
Example --> Days of week

2) Faster Access -> python knows tuple will never change , it can optimize storage and classes.

3) Hashability --> Immutable object can be used as dictionary keys.can't use list here.

### Syntax

t = (1,2,3)

without parentheses
t = 1,2,3  -->python automatically creates a tuple

empty tuple --> t = ()

single element tuple 
t = (10,)
t = 10,

using tuple()
t = tuple([1,2,3])


### Methods and operations
count()  -> count occurances
t.count()

index()  -> returns first Occurances
tuple.index(value)

len()  

x in t #Membership

Concatentation

t1 = (1,2)
t2 = (3,4)
t3 = t1 + t2

### Packing and Unpacking
multiple values become one tuple.
person = "Abhay" , 25 , "Pune"
equivalent to person = ("Abhay" , 25 , "Pune")

### Extended Unpacking
#Extended Unpacking
numbers = (1,2,3,4,5)
a , *middle , b = numbers
print(a) #1
print(middle) #[2,3,4]
print(b) #5

here *middle become a List.

### nested tuples
#nesting of two tuples
tup1 = (0,1,2,3)
tup2 = ('python','java')
tup3 = (tup1,tup2)
print(tup3)  #((0, 1, 2, 3), ('python', 'java'))

### Deleting a tuple in python
we can delete a tuple
tup = (0,1)
del tup
print(tup) #name 'tup' is not defined

#### FOllowing methods can't be used for tuple 
append() , insert() , remove() , pop() , clear() , sort() , reverse()

### use tuples for heterogenous and list for homogenous

#### uses lower memory , slightly faster than List

### Where Tuples are Preferred 
used when :
Data should not change.
Returning multiple values
coordinates , configuration constants , Dictioanary keys , Fixed records.

### The list inside tuple is mutable.


### Memory Working
Python allocates exactly enough slots no extra growth space because tuple size never change.
Tuple stores references to objects , not the objects themselves.

## Q -> why tuple uses less memory
Because Python does not reserve extra Capacity

## Q -> Why list is not hashable
if a list changed after being used as a dictionary key , the hash table would become inconsistent.

## Q -> can tuple be dictionary key?
yes , if all elements inside are hashable.
([1,2], 3) --> Invalid