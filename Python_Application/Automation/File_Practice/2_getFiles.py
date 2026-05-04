import sys
import os
def getFiles(DirectoryName):

  for Folder , subFolder , File in os.walk(DirectoryName):
    
    for FileName in File:
     print(FileName)

def main():
  DirectoryName = sys.argv[1]
  getFiles(DirectoryName)
if __name__ == "__main__":
  main()