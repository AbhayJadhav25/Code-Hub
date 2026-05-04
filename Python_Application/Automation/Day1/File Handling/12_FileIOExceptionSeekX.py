# seek(Kuthe , kuthun)
#kuthun : 0 / 1/ 2
# 0 : Starting Offset
# 1 : Current Offset
# 2 : End
def main():
  try:
    fobj = open("Hello.txt" , "r")
    print("File gets sucessfully opend.")

    print("Current Offset is : ",fobj.tell()) #0 -->#it tell in opend file where is our read pointer.

    fobj.seek(7 , 0)

    print("Current Offset is : ",fobj.tell()) #7

    Data = fobj.read(10)
    print("Current Offset is : ",fobj.tell()) #17

    print("Data from file is : ", Data)
    fobj.close()
  except FileNotFoundError:
    print("Unable to open find as there is no such file")
  
  finally :
    print("End of Application")
    fobj.close()
if __name__ == "__main__":
  main()