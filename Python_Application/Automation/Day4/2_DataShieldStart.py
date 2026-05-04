#Command line Input.
import sys
import os
import time
import schedule

def fun(DirName):
  pass
def main():
  Border = "-"*50
  print(Border)
  print("--------Marvellous Data Shield System--------")
  print(Border)

  if(len(sys.argv) == 2):
    if(sys.argv[1]=="--h" or sys.argv[1]=="--H"):
      print("This script is used to : ")
      print("1 : Takes auto backup at given time.")
      print("2 : Backup only new and updated files.")
      print("3 : Create an archive(zip) of the backup periodically")
      
    elif(sys.argv[1]=="--u" or sys.argv[1]=="--U"):
      print(f"Use the automation script as \nScriptName.py Timeinterval SourceDirectory\nTimeinterval : The time in minutes for periodic scheduling\SourceDirectory : Name of directory backedUp.")
      
    else :
      print("Unable to proceed as there is no such option.")
      print("Please use --h or --u to get more details.")

  #python Demo.py 5 Data
  elif(len(sys.argv)==3):
    print("Time Interval : ",sys.argv[1])
    print("Directory Name : ",sys.argv[2])
    
    #Apply the scheduler
    schedule.every(int(sys.argv[1])).seconds.do(fun , sys.argv[2])

    print("Data Shield System Starting")
    print("Directed created with name : ",sys.argv[2])
    print("Time Interval in minutes : ",sys.argv[1])
    print("Press Ctrl + C  to stop the execution.")

    #wait till abort.
    while True:
      schedule.run_pending()
      time.sleep(1)
  else:
    print("Invalid Number of command line arguments.")
    print("Unable to proceed as there is no such option.")
    print("Please use --h or --u to get more details.")
    

  print(Border)
  print("----------Thank You for using our Script---------")
  print(Border)

if __name__ == "__main__":
  main()