from sys import getsizeof as size
L = [x*x for x in range(1,10000)]
x = (x*x for x in range(1,10000))

print(size(L))
print(size(x))
