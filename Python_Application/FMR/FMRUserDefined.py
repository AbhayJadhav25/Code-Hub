from functools import reduce

CheckEven = lambda No : (No%2==0)
Increment = lambda No : No+1
Add = lambda No1,No2 : No1 + No2

def filterX(Task , Elements):
  Result = list()

  for no in Elements:
    Ret = Task(no)

    if(Ret == True):
      Result.append(no)
  
  return Result
def main():
  Data = [11,10,15,20,22,27,30]
  print("Actual Data is : ",Data)

  FData =list(filterX(CheckEven , Data))
  print("Data after filter is ",FData)

  MData = list(map(Increment , FData))
  print("Data after Mapping is : ",MData)

  RData = int(reduce(Add , MData))
  print("Data after Reduce is : ",RData)

if __name__ == "__main__":
  main()