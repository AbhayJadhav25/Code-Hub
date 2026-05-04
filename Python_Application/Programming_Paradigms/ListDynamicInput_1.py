def main():
  Size = 0

  print("Enter the number of elements : ")
  size = int(input())

  Data = list()   #here we create a object of list.
  print("Enter Element")
  for i in range(size):
    Value = int(input())
    Data.append(Value)    
  print(Data)

if __name__ == "__main__":
  main()