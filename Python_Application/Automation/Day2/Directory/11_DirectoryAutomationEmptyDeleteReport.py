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
  totalFiles = 0 
  emptyFile = 0
  for FolderName , SubFolder , Filename in os.walk(DirName):
    
    for fname in Filename:
      fname = os.path.join(FolderName , fname)
      totalFiles+=1
      print(fname)
      print(f"File name = {fname}")
      print(f"File Size = {os.path.getsize(fname)}") 

      if(os.path.getsize(fname) == 0):
        emptyFile+=1
        print("Deleted File Name : " , fname)
        os.remove(fname)
  Border = "-"*50
  print(Border)
  print("-------Automation Report-------")
  print("Total Files Scanned : ",totalFiles)
  print("Total Empty Files  : ",emptyFile)
  Border = "-"*50
  print(Border)

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

  print(Border)
  print("-----------Thank You !----------")
  print(Border)

if __name__ == "__main__":
  main()