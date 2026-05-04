#Procedural
def checkEven(No):
  if(No%2==0):
    print("It is Even")
  else:
    print("It is odd")

def main():
  Value = 0 #here type of Value is decide

  print("Enter any number : ")
  Value = int(input())

  checkEven(Value) #positional Arguments
  

if __name__ == "__main__":
  main()