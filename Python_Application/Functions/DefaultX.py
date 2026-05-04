
def EmpolyeeInfo(Name ,  Age , Salary , City="Pune"):
  print("Name :",Name)
  print("Age :",Age)
  print("Salary :",Salary)
  print("City :",City)

def main():

  #Keyword Arguments
  EmpolyeeInfo("Rahul" , 26 , 2000.50)  #correct
  EmpolyeeInfo("Rahul" , 26 , 2000.50 , "Mumbai")  #correct

  
if __name__ =="__main__" :
  main()