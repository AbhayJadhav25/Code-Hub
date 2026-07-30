lst = [10,20,30]

#step 1: lst pass an argument to iter().
lst_iter = iter(lst)

#lst_iter has both __iter__ and __next__ method so it becomes iterator.
print(next(lst_iter))
print(next(lst_iter))
print(next(lst_iter))

print(next(lst_iter)) #StopIteration

'''
when all values are return using next and after end of the sequence if we still try to fetch values from list it throws StopIteration error. so base on this scenario we can design our own for loop.
'''