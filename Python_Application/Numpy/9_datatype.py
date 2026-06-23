import numpy as np
arr1 = np.array([1,2,3,4,5])
print(arr1)
print(arr1.dtype) #int64

arr1 = np.array([1,2,3,4,5] , dtype = 'i2')
print(arr1.dtype) #int16

arr2 = np.array([1.3 , 2.0 , 3.6])
print(arr1)
print(arr2.dtype) #float64

newarr = arr2.astype('i')
print(newarr , newarr.dtype) #[1 2 3] int32

bug = np.array([1 , 'a' , 3] , dtype = 'i')
print(bug)  #ValueError: invalid literal for int() with base 10: 'a'


