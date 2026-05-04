import os
def DirectoryScanner(DirectoryName):
  if(not(os.path.exists(DirectoryName))):
    print("Failure.! Directory Does not exist.")
    return
  
  if(not(os.path.isdir(DirectoryName))):
    print("Unable to scan. it's not directory. ")
    return
  
  print("Contents of the directory are : ")
  for FolderName , SubFolderName , FileName in os.walk(DirectoryName):
    print("Folder name : ",FolderName)

    for subf in SubFolderName:
      print("SubFolder name : ",subf)

    for fname in FileName:
      print(f"File Name : {fname}")

def main():
  DirectoryName = input("Enter the name of directory : ")
  DirectoryScanner(DirectoryName)
 
if __name__ == "__main__":
  main()