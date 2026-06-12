scores = [88,72,95 , 60]

new_scores = sorted(scores)
#sorted(key)  #it creates a new list and keep the original list unchanged.
print(new_scores)

descending_order = sorted(scores , reverse=True)
print(descending_order) #sort in ascending order

# scores.sort() #sorted in place , accept only 

scores.sort(reverse=True) #sort in ascending order

print(scores)

#sorting on based of length of string
fruits = ["banana" , "kiwi" , "apple" , "watermelon"]
result = sorted(fruits , key=len)
print(result)

fruits.sort(key = len)
print(fruits)

#sort() with key
students = [
    ("John" , 78) ,
    ("Alice" , 92) ,
    ("Bob" , 85)
]

sort_by_marks = sorted( students, key =  lambda x:x[1])
print(sort_by_marks)

students.sort(key = lambda x : x[1])
print(students) #x is tuple and x[1] is marks , so sorting happens based on marks

students.sort(key = lambda x : x[0])
print(students) #sorting happens based on name str length

#Sort Dictionary list by age

employees = [
    {"name" : "Rahul" , "age" : 30} , 
    {"name" : "Amar" , "age" : 27} , 
    {"name" : "Om" , "age" : 32} , 
    {"name" : "Sai" , "age" : 34} , 
]

sort_by_age = sorted(employees , key = lambda x : x["age"])
print(sort_by_age)

employees.sort(key = lambda x : x["name"])
print(employees)

#multiple Keys 
'''
1 . age ascending
2 . Name ascending
'''

employees = [
    ("Rahul", 30),
    ("Amit", 25),
    ("Priya", 30),
    ("Kiran", 25)
]

result = sorted(employees , key = lambda x : (x[1] , x[0]))
print(result)

#how it works
'''
result = sorted(employees , key = lambda x : (x[1] , x[0]))

python firstly sort by age because x[1] appear firstly in lambda
if age equal , it sort by name.
'''
#sort() work on list only
# sorted() work on any iterable 