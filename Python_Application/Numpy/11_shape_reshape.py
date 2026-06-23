import numpy as np
arr = np.array([
    [1,2,3] ,
    [4,5,6],
    [7,8,9]
])

print(arr.shape)  #(3,3)

newarr = arr.reshape(-1)  #it creates a view so change in one affect the original.
print(newarr)
newarr[1] = 10
print(arr)


arr = np.array([
    [1,2,3] ,
    [4,5,6],
    [7,8,9]
])
 
newarr = np.ravel(arr)    ##it creates a view so change in one affect the original.
newarr[0] = 100 
print(newarr)
print(arr)


newarr = arr.flatten()  #it created a copy so change  in this does not affect the originl.
newarr[1] = 10
print(arr)
print(newarr)