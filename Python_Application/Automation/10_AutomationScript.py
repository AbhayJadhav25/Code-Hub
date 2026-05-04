import schedule
import time
import sys
def main():
 Border = "-"*40
 print(Border)
 print("-"*7,"Marvellous Automation","-"*7)
 print(Border)

 if(len(sys.argv) == 2):
   if((sys.argv[1]=="--h") or (sys.argv[1]=="--H")):
     print("This Application is used to perform ____")
     print("This is a automation script.")
     
   elif((sys.argv[1]=="--u") or (sys.argv[1]=="--U")):
     print("Use the given Script as ")
     print("ScriptName.py Argument1 Argument2")
     print("Argument 1 : _______")
     print("Argument 2 : _______")
     
   else:
     print("Use the given flags as : ")
     print("--u : used to display the usage")
     print("--h : used to display the help")
 else:
   print("Invalid number of command line arguments")
   print("--u : used to display the usage")
   print("--h : used to display the help")
 
 print(Border)
 print("-"*5,"Thank You For using our Script","-"*5)
 print("-"*7,"Marvellous Automation","-"*7)
 print(Border)
if __name__ == "__main__":
  main()