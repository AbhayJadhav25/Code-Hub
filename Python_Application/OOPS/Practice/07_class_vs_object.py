class Person:
    species = "Human" #Class Property

    def __init__(self , name):
        self.name = name

p1 = Person("Joe")
# print(p1.species)
# print(p1.name)

# Person.species = "Wild"
# print(p1.species)

# #we can add new properties to existing objects
# Person.gender = "male"
# print(p1.gender)


#code Challenge

class Student:
    def __init__(self , name , grade):
        self.name = name
        self.grade = grade

s1 = Student("Anna" , "A")
print(s1.grade)

s1.grade = "B"

print(s1.grade)