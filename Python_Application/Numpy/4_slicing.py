import numpy as np
arr1 = np.array([1,2,3,4,5])
print(arr1[1:4])  #[2,3,4]
print(arr1[::-1])  #[5 4 3 2 1]
print(arr1[::-2])   #[5 3 1]

arr = np.array([
    [1,2,3] ,
    [4,5,6],
    [7,8,9]
])

print(arr[1:2]) #row slice   [[4 5 6]]
print(arr[1:3]) #row slice  [[4,5,6] , [7,8,9]]

print(arr[: , 1:3]) #column slice 
'''
[[2 3]
 [5 6]
 [8 9]]
'''

print(arr[: , 2])  #[3,6,9]

