class Person:
    def __init__(self , fname , lname):
        self.firstname = fname
        self.lastname = lname

    def print_name(self):
        print(self.firstname , self.lastname)

class Student(Person):
    def __init__(self , fname ,lname , Class):
        super().__init__( fname , lname)
        self.Class = Class

    def print_name(self):
        super().print_name()
        print(self.Class)
        
x = Student("John" , "Doe" , "Ty")
x.print_name()

#code challenge

class Animal:
    def __init__(self , name):
        self.name =name

    def speak(self):
        print(self.name)

class Dog(Animal):
    pass

d1 = Dog("Rex")
d1.speak()