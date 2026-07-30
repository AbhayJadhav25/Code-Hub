from sys import getsizeof as size

lst = [x for x in range(1,1000)]
# print(dir(lst))  #result contains __iter__ so it is iterable but not iterator because result does not contain __next__
print(size(lst))  #8856 bytes


lst_iterator = iter(lst)
# print(dir(lst_iterator))     #result contains __iter__ and __next__ so it is iterable and iterator
print(size(lst_iterator)) #48 bytes

x = range(1,10)
print(dir(x)) #range is iterable but not iterator because it does not contain __next__.


