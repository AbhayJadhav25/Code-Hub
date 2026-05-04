def multiplication(Value1 , Value2):
  Ans = 0  #Local Variable
  Ans = Value1*Value2
  return Ans


def main():
  No1 = 0
  No2 = 0
  Result = 0
  No1 = int(input("Enter First Number : "))
  No2 = int(input("Enter Second Number : "))
  Result = multiplication(No1,No2)
  print("Multiplication = ",Result)

main()