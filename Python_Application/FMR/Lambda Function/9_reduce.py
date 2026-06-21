from functools import reduce

nums = [1,2,3,4]
total = reduce(lambda x , y : x + y , nums)
print(total)

maximum = reduce(lambda x , y : x if x>y else y , nums)
print(maximum)

with_start = reduce(lambda x , y : x + y , nums , 100)
print(with_start)