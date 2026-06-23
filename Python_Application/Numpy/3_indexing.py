import numpy as np
a1 = np.array([1,2,3,4,5])
print(a1[2])  #3
print(a1[-1]) #5

a2 = np.array([
    [1,2,3],
    [4,5,6] , 
    [7,8,9]
]) 

print(a2[2][1]) #8

#Access 3D matrix
arr3 = np.array([
    [
        [1,2,3],
        [4,5,6]
    ],
    [
        [7,8,9],
        [10,11,12]
    ]
])
print(arr3[1 , 1, 1]) #11
print(arr3.ndim)