import sys
import os

def  getEmptyFiles(DirName):

  for Folder , subFolder , File in os.walk(DirName):

    for Fname in File:
      Fname = os.path.join(Folder , Fname)

      Fsize = os.path.getsize(Fname)

      if(Fsize == 0):
        print(Fname)
        
def main():
  DirName = sys.argv[1]
  getEmptyFiles(DirName)
if __name__ == "__main__":
  main()