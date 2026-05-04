class Demo:
  No = 10

  def __init__(self,A,B):  #__init__ is mandatory for create instance Variable
    self.Value1 = A
    self.Value2 = B

  def fun(self):
    print("Inside instance method fun" , self.Value1 , self.Value2)

  @classmethod
  def sun(cls):
    print("Inside class method sun : " ,cls.No )

  @staticmethod
  def gun():
    print("Inside static method Gun." , Demo.No)

Demo.sun()
print("Class Variable No : ",Demo.No)

obj = Demo(11,21)

obj.fun()
print("Instance Variable : ",obj.Value1 , obj.Value2)

Demo.gun()