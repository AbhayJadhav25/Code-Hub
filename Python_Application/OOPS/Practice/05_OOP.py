#createing class person and use the __init__() method to assign values for name and age
# class Person:
#     def __init__(self , name , age):
#         self.name = name
#         self.age = age

# p1 = Person('Pratik' , 22)
# print(p1.name)
# print(p1.age)/



class Dog:
    def __init__(self , name , age):
        self.name = name
        self.age = age
    
    def bark(self):
        print(self.name, "says woof!")

d1 = Dog("Buddy" , 3)
d1.bark()