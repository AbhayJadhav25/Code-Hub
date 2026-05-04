def main():
  try:
    fobj = open("Hello.txt" , "r")
    print("File gets sucessfully opend.")

    print("Current Offset is : ",fobj.tell()) #0 -->#it tell in opend file where is our read pointer.

    fobj.seek(7) #skip first 7 bytes and read data above from 7th position

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