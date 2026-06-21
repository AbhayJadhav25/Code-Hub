nums = [1,2,3,4,5,6]
# evens = filter(lambda x : x %2 == 0 , nums) it also return a filter object a lazy iterator. so type cast it into list explictly.
evens = list(filter(lambda x : x%2 == 0 , nums))
print(evens)