class Parent:
  def __init__(self):
    print("Inside Parent Constructor")
    self.No1 = 10
    self.No2 = 20

  def fun(self):
    print("Inside Fun method of Parent.")

class Child(Parent):
  def __init__(self):
    super().__init__()
    print("Inside Child Constructor")
    self.A = 11
    self.B = 21

  def sun(self):
    print("Inside sun method of Child class.")

cobj = Child()

# cobj.fun()