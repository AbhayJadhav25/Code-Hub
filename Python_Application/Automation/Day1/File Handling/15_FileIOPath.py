import os
def main():
  FileName = input("Enter the name of file : ")

  Ret = os.path.isabs(FileName)

  if(Ret):
    print("It's absolute Path")
  else:
    print("It's relative Path")
  
  

if __name__ == "__main__":
  main()