x = 100
def Fun():
  global x
  x+=10
  print(x)
print(x) #100
Fun() #110
print(x) #110