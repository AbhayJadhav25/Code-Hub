import time
import datetime
def main():
  print(time.time())  #1769409011.3369505 Number of hours from 1st Jan 1970 . to curret datetime.
  print(time.ctime()) #current Date
  print(datetime.datetime.now())
if __name__ == "__main__":
  main()