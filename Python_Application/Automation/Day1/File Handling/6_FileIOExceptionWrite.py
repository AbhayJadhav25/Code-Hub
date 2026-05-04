def main():
  try:
    fobj = open("Hello.txt" , "w")
    print("File gets sucessfully opend.")

    fobj.write("Jay Ganesh Marvellous....  ")

    fobj.close()
  except FileNotFoundError:
    print("Unable to open find as there is no such file")
  
  finally :
    print("End of Application")
    fobj.close()
if __name__ == "__main__":
  main()