#we can use any name instead of self , it is not mandatory use self.

class Person:
    def __init__(myObj , name):
        myObj.name = name

# p1 = Person("Samrath")
# print(p1.name)

#Code Challenge
class Car:
    def __init__(self , brand):
        self.brand = brand

    def show(self):
        print(self.brand)

c1 = Car("Ford")
c1.show()