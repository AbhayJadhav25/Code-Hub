#Q4. Use `functools.reduce` with a lambda to compute the product of all numbers in a list, then repeat using an `initial` value of `1` and explain why the result differs for an empty list.


from functools import reduce
nums = [2,3,4]
muls = reduce(lambda x , y : x*y , nums)
print(muls) #24

initial_1 = reduce(lambda x , y : x*y , nums , 1)
print(initial_1)


#with empty list
# ans = reduce(lambda x , y : x*y , [])
# print(ans) #TypeError : reduce() of empty iterable with no initial value

#with empty list initial with 1
ans = reduce(lambda x , y : x*y , [] , 1)
print(ans) #1