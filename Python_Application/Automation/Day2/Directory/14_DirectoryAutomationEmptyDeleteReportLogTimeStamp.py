import sys
import os
import time

def DirectoryScanner(DirName = "Marvellous"):
  Border = "-"*50
  timestamp = time.ctime()
  Logfilename = "Marvellous%s.log" %(timestamp)
  Logfilename = Logfilename.replace(" ","_")
  Logfilename = Logfilename.replace(":","_")
  fobj = open(Logfilename , "w")

  fobj.write(Border+"\n")
  fobj.write("This is a log file created by a Marvellous Automation"+"\n")
  fobj.write("This is a directory cleaner Script"+"\n")
  fobj.write(Border+"\n")
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
      if(os.path.getsize(fname) == 0):
        emptyFile+=1
        os.remove(fname)


  # fobj.write(Border)
  fobj.write("-------Automation Report-------")
  fobj.write("Total Files Scanned : "+str(totalFiles)+"\n")
  fobj.write("Total Empty Files  : "+str(emptyFile)+"\n")
  fobj.write("This log is created at  : "+timestamp+"\n")
  fobj.write(Border+"\n")
  fobj.close()

def main():
  # Border = "-"*50

  # print(Border)
  # print("-----------Marvellous Directory Automation----------")
  # print(Border)

  if(len(sys.argv)!=2):
    print("Invalid number of arguments.")
    print("Please specify the name of Directory.")
    return
  
  DirectoryScanner(sys.argv[1])

  # print(Border)
  # print("-----------Thank You !----------")
  # print(Border)

if __name__ == "__main__":
  main()