import gc

class Demo:
  #Class Variable
  No1 = 10
  No2 = 11

  def __init__(self):
    #instance Variable
    self.A = 101
    self.B = 201
    print("Inside Constructor")
  
  def __del__(self):
    print("Inside Destructor")

print(Demo.No1)
print(Demo.No2)

# print(Demo.A)  #AttributeError: type object 'Demo' has no attribute 'A' 

obj = Demo()
print(obj.A)
print(obj.B)  