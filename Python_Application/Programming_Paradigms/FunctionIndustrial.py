def checkEven(No):
  if(No%2==0):
    return True
  else:
    return False

def main():
  Value = 0 #here type of Value is decide
  Ret = False
  print("Enter any number : ")
  Value = int(input())
  Ret = checkEven(Value) #positional Arguments

  print(Ret)

if __name__ == "__main__":
  main()