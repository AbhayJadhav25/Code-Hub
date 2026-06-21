nums = [1,2,3,4]
# squares = map(lambda x : x**2 , nums)   #it returns a map object like this <map object at 0x00000242BF7E9B40>
squares = list(map(lambda x : x**2 , nums))
print(squares)

#multiple iterable
num1 = [1,2,3]
num2 = [10,20,30]
sums = list(map(lambda a , b : a+b , num1 , num2))
print(sums)