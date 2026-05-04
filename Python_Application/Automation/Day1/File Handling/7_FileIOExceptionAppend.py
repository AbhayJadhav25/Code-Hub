def main():
  try:
    fobj = open("Hello.txt" , "a")
    print("File gets sucessfully opend.")

    fobj.write("Python Automation")

    fobj.close()
  except FileNotFoundError:
    print("Unable to open find as there is no such file")
  
  finally :
    print("End of Application")
    fobj.close()
if __name__ == "__main__":
  main()