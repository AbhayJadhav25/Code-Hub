def main():
  try:
    fobj = open("Hello.txt" , "r")
    print("File gets sucessfully opend.")

    Data = fobj.read(6) #it read first 6 byte from file.

    print("Data from file is : ", Data)
    fobj.close()
  except FileNotFoundError:
    print("Unable to open find as there is no such file")
  
  finally :
    print("End of Application")
    fobj.close()
if __name__ == "__main__":
  main()