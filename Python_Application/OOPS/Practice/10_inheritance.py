class Person:
    def __init__(self , fname , lname):
        self.firstname = fname
        self.lastname = lname

    def print_name(self):
        print(self.firstname , self.lastname)

class Student(Person):
    def __init__(self , fname ,lname , Class):
        Person.__init__(self , fname , lname)
        self.Class = Class

    def print_name(self):
        super().print_name()
        print(self.Class)
        
x = Student("John" , "Doe" , "Ty")
x.print_name()