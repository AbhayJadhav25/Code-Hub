import numpy as np
arr1 = np.array([1,2,3,4,5])

x = arr1.copy()
arr1[0] = 50   #[50  2  3  4  5]
print(arr1)   #[1 2 3 4 5]
print(x)

#here we can observe changes in one does not affect the other.
arr1 = np.array([1,2,3,4,5])
y = arr1.view()
arr1[0] = 42
y[1] = 43
print(arr1 , y)  #[42  43  3  4  5] [42  43  3  4  5]

#checks array owns its data or not if yes then it returns None otherwise return original array.
print(x.base) #none
print(y.base)  #[42  43  3  4  5]
