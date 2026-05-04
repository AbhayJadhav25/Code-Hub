import sys
import os

def DeleteEmptyFiles(DirectoryName= 'Marvellous'):

  for Folder , SubFolder , File in os.walk(DirectoryName):
    print("Folder Name : ",Folder)

    for SubFolderName in SubFolder:
       print(SubFolderName)
       
    for FileName in File :
        print(FileName)

def main():
  DirectoryName = sys.argv[1]
  DeleteEmptyFiles(DirectoryName)

if __name__ == "__main__":
  main()