import os
def main():
  FileName = input("Enter the name of file : ")

  if(os.path.exists(FileName)):
    Ret = os.path.isabs(FileName)

    if(Ret):
      print("It's absolute Path")
    else:
      print("It's relative Path")
      NewPath = os.path.abspath(FileName)
      print(NewPath)
  else:
    print("There is no such file")
  
  

if __name__ == "__main__":
  main()