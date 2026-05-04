import os
import sys

def getSizeOfFiles(DirName):

  for Folder , subFolder , File in os.walk(DirName):

    for Fname in File:
      Fname = os.path.join(Folder , Fname)
      print("File Name = ",Fname)
      print("File Size = ",os.path.getsize(Fname))

def main():
  DirName = sys.argv[1]
  getSizeOfFiles(DirName)
if __name__ == "__main__":
  main()