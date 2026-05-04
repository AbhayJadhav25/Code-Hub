import sys
import os
def DirectoryScanner(DirName = "Marvellous"):
  Ret = False

  Ret = os.path.exists(DirName)
  if(Ret == False):
    print("There is no such directory.")

  Ret = os.path.isdir(DirName)
  if(Ret == False):
    print("Unable to Scan. It's is not a directory.")
    return
  
  for FolderName , SubFolder , Filename in os.walk(DirName):

    for fname in Filename:
      print(f"File name = {fname} \t File Size = {os.path.getsize(fname)}")  #path issue.


def main():
  Border = "-"*50

  print(Border)
  print("-----------Marvellous Directory Automation----------")
  print(Border)

  if(len(sys.argv)!=2):
    print("Invalid number of arguments.")
    print("Please specify the name of Directory.")
    return
  
  DirectoryScanner(sys.argv[1])
if __name__ == "__main__":
  main()