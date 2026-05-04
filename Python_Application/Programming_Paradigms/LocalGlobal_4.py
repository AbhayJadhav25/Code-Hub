No = 11 #Global #Called as data definitation 

def Fun():
  global No   #like as extern keyword of c
  print("Value of No fron Fun() is : ",No) #11
  No+= 1
  print("Value of No fron Fun() is : ",No) #12

print("Value of No is : ",No) #11
Fun()
print("Value of No is : ",No) #12
