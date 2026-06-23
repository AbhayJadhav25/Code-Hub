import numpy as np
arr1 = np.array([1,2,3,4,5,6,7,8,9])

idx = np.array([1,3,5])

print(arr1[idx])  #[2,4,6]

count = arr1 > 4
print(count)  #[False False False False  True  True  True  True  True]
print(arr1[count]) #[5,6,7,8,9]  boolean indexing

