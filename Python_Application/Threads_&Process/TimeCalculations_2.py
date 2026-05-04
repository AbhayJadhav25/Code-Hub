import time

start_time = time.time()
def Factorail(No):
  fact = 1
  for i in range(1,No+1):
    fact*=i
  return fact

def main():
  Value = int(input("Enter Any Number"))
  start_time = time.time()
  Ans = Factorail(Value)
  print("Factorail is : ",Ans)
  end_time = time.time()
  print("Total Execution time is : ",end_time - start_time)

if __name__ == "__main__":
  main()

end_time = time.time()