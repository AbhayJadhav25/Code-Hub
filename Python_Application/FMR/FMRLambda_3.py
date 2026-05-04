from functools import reduce
# def CheckEven(No):
#   return (No%2==0)

# def Increment(No):
#   return No+1

# def Add(A,B):
#   return A+B

def main():
  Data = [11,10,15,20,22,27,30]
  print("Actual Data is : ",Data)

  FData =list(filter(lambda No : (No%2==0) , Data))
  print("Data after filter is ",FData)

  MData = list(map(lambda No : No+1 , FData))
  print("Data after Mapping is : ",MData)

  RData = int(reduce(lambda No1,No2 : No1 + No2 , MData))
  print("Data after Reduce is : ",RData)

if __name__ == "__main__":
  main()