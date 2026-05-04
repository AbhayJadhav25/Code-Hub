def checkEven(No):
  return (No%2==0)


def main():
  Value = 0 #here type of Value is decide
  Ret = False #here type of Ret is decide.
  print("Enter any number : ")
  Value = int(input())
  Ret = checkEven(Value) #positional Arguments

  if(Ret):
    print("Number is Even")
  else:
    print("Number is odd")

if __name__ == "__main__":
  main()