def main():
  try:
    open("Demo.txt")
    print("File gets sucessfully opend.")
  except FileNotFoundError:
    print("Unable to open find as there is no such file")
  
  finally :
    print("End of Application")

if __name__ == "__main__":
  main()