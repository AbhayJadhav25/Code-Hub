import sys
import os
def FolderSize(DirectoyName):
  if(not(os.path.exists(DirectoyName))):
    print("No such Directory avilable.")
    return
  
  if(not(os.path.isdir(DirectoyName))):
    print("Unable to Scan . it is not Directory")
    return
  
  for FolderName , subFolder , FileName in os.walk(DirectoyName):
    for fname in FileName :
      print(f"{fname} = {sys.getsizeof(fname)}")

def main():
  FolderSize(sys.argv[1])
if __name__ == "__main__":
  main()