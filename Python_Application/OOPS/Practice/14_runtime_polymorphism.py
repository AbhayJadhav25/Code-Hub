class Animal:
    def sound(self):
        return "some generic sound"
    
class Dog:
    def sound(self):
        return "Bark"
    
class Cat:
    def sound(self):
        return "Meowww"
    
animals = [Animal() , Dog() , Cat()]
for animal in animals:
    print(animal.sound())