import numpy as np
#1 Dimensional Array
arr = np.array([1,2,3,4])
print(arr)
print(np.ndim(arr))

#2-D array
arr_2d = np.array([[1,2,3],[4,5,6]])
print(arr_2d)
print(np.ndim(arr_2d))

#3-D array
arr_3d = np.array([[[1,2,3] , [4,5,6] , [7,8,9]]])
print(arr_3d)
print(np.ndim(arr_3d))

print(np.__version__)