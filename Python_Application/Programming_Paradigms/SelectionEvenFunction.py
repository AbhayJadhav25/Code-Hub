def checkEven(No):
  if(No%2==0):
    print("It is Even")
  else:
    print("It is odd")

def main():
  checkEven(21) #positional Arguments
  checkEven(No = 22) #keyword Arguments

if __name__ == "__main__":
  main()