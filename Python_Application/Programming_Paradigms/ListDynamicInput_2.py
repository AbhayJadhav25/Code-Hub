def main():
  Size = 0

  print("Enter the number of elements : ")
  size = int(input())

  Data = list()   #here we create a object of list.
  print("Enter Element")
  for i in range(size):
    Value = int(input())
    Data.append(Value)    

  Sum=0
  for i in range(size):
    Sum+=Data[i]
  print("Addition is ",Sum)

    

if __name__ == "__main__":
  main()