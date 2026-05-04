#Dunder method / Magic method / Special Method

class Demo:
  def __init__(self , A):
    self.No1 = A

obj1 = Demo(11)
obj2 = Demo(21)

print(11+21) #32
# print(obj1 + obj2)  #we can't add two objects TypeError: unsupported operand type(s) for +: 'Demo' and 'Demo'
