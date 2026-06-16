#Question : print all even from 1 to n and number should be grater than 10.
nums = range(1,30)
result = [num for num in nums 
          if num%2 == 0
          if num > 10
          ]

#equivalent way
result2 = [num for num in nums if num%2==0 and num>10 ]
print(result)