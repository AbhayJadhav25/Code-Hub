No = 11 #Global #Called as data definitation 

def Fun():
  No = 21
  print("Value of No fron Fun() is : ",No) #21
  No+=1
  print("Value of No fron Fun() is : ",No) #22

print("Value of No is : ",No) #11
Fun()
print("Value of No is : ",No) #11
