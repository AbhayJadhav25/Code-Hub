items = [1 , 2]
items.append([3,4]) 
#append() add one object
print(items) #o/p : [1 , 2 , [3 , 4]]


items.extend([5,6,7])
#extend() add every item from another iterable
print(items) #o/p : [1 , 2 , [3 , 4] , 5 , 6, 7]

items.extend("abc")
print(items) #[1, 2, [3, 4], 5, 6, 7, 'a', 'b', 'c']