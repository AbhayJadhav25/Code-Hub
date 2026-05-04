class A:
  def show(self):
    print("A")

class B:
  def show(self):
    print("B")

class C(A,B):
  pass

obj = C()
obj.show()
print(C.mro())