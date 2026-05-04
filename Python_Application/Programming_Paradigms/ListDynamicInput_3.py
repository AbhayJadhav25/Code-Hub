def Summation(Arr):
  Sum=0
  for i in range(len(Arr)):
    Sum+=Arr[i]

  return Sum

def main():
  Size = 0
  Ret = 0
  print("Enter the number of elements : ")
  size = int(input())

  Data = list()   #here we create a object of list.
  print("Enter Element")
  for i in range(size):
    Value = int(input())
    Data.append(Value)    

  Ret = Summation(Data)
  print("Addition is ",Ret)

    

if __name__ == "__main__":
  main()