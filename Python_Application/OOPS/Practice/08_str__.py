#withoud __str__()
'''
class Person:
    def __init__(self , name : str , age : int):
        self.age = age
        self.name = name

p1 = Person('sammy' , 20)
print(p1.name)
print(p1)   #<__main__.Person object at 0x000002194AF70AD0>
'''

'''class Person:
    def __init__(self , name , age):
        self.name = name
        self.age = age

    def __str__(self):
        return f"{self.name},{self.age}"
    
p1 = Person("Joe" , 20)
print(p1)   #Joe,20'''


class Rectangle:
    def __init__(self , width , height):
        self.width = width
        self.height = height

    def area(self):
        return self.height * self.height
    
    def __str__(self):
        return f"{self.area()}"
r1 = Rectangle(5,3)
print(r1.area())