import os
def main():
  FileName = input("Enter the name of file : ")

  if(os.path.exists(FileName)):
    os.remove(FileName)
    print("File Removed Successfully")
  else:
    print("There is no such file")
  
  

if __name__ == "__main__":
  main()