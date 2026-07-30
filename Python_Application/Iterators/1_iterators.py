from sys import getsizeof as size
lst = [1,2,3]
print(size(lst)) #88

#here lst is iterable

x = range(1,4)
print(size(x)) #44 x is iterator

for num in lst:
    print(num)

for num in x:
    print(num)