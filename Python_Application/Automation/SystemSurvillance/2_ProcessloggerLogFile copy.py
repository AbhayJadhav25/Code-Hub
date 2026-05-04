#Command line Input.

import psutil
import sys
import os
import time
def CreateLog(FolderName):
  Ret = False
  Ret = os.path.exists(FolderName)

  if Ret:
    Ret = os.path.isdir(FolderName)
    if Ret == False:
      print("Unable to create folder.")
      
  else:
    os.mkdir(FolderName)
    print("Directory for logs create successfullly.")
  
def main():
  Border = "-"*50
  print(Border)
  print("Marvellous Platform Surveillance System")
  print(Border)

  if(len(sys.argv) == 2):
    if(sys.argv[1]=="--h" or sys.argv[1]=="--H"):
      print("This script is used to : ")
      print("1 : Create automatic logs")
      print("2 : Execute perodically")
      print("3 : Sends mail with the log.")
      print("4 : Store information about processes")
      print("5 : Store information about CPU")
      print("6 : Store information about RAM usage")
      print("7 : Store information about RAM secondary storage.")
    
    elif(sys.argv[1]=="--u" or sys.argv[1]=="--U"):
      print(f"Use the automation script as \nScriptName.py Timeinterval DirectoryName\nTimeinterval : The time in minutes for periodic scheduling\nDirectoryName : NAme of directory to create auto logs.\n")
    else :
      print("Unable to proceed as there is no such option.")
      print("Please use --h or --u to get more details.")
  #python Demo.py 5 MArvellous
  elif(len(sys.argv)==3):
    print("Inside projects logic")
    print("Time Interval : ",sys.argv[1])
    print("Directory Name : ",sys.argv[2])
    CreateLog(sys.argv[2])

  else:
    print("Invalid Number of command line arguments.")
    print("Unable to proceed as there is no such option.")
    print("Please use --h or --u to get more details.")
    

  print(Border)
  print("----------Thank You for using our Script---------")
  print(Border)
if __name__ == "__main__":
  main()