import sys
import os
def DeleteEmptyFiles(DirName):
  Count = 0

  for Folder ,subFolder , File in os.walk(DirName):
    for Fname in File:
      Fname = os.path.join(Folder , Fname)
      Fsize = os.path.getsize(Fname)

      if(Fsize == 0):
        print("Deleted FileName = ",Fname)
        os.remove(Fname)
        Count+=1
  print("Total Deleted Files : ",Count)

def main():
  DirName =  sys.argv[1]
  DeleteEmptyFiles(DirName)
if __name__ == "__main__":
  main()


