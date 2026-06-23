import numpy as np
arr1 = np.array([1,2,3,4,5])
arr2 = np.array([11,12,13 , 14,15])

# print(arr1 + arr2)  #operands could not be broadcast together with shapes (5,) (3,)
print(arr1 + arr2)
print(arr1 - arr2)
print(arr1 * arr2)
print(arr1 / arr2)


#unary opeartion
arr3 = np.array([-3,-1,0,1,3])

#print absolute
print(np.abs(arr3))
print(np.negative(arr3))


#Binary Operator
a = np.array([1,2,3])
b = np.array([4,5,6])

add = np.add(a , b) #[5,7,9]
print(add)
add1 = np.sum(a) + np.sum(b)  #total of both  array and give a single value
print(add1)

substract = np.subtract(b , a)
print(substract) #[3,3,3]

multiply = np.multiply(a,b)
print(multiply) #[4 10 18]

div = np.divide(b , a)
print(div)