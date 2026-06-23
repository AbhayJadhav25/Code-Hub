import numpy as np

#create array of sin values
a = np.array([0 , np.pi / 2 , np.pi])
print(np.sin(a))

#exponential values
b = np.array([0,1,2,3])
print(np.exp(b))

print(np.sqrt(b))
print(np.sqrt(a))

print(type(a)) #<class 'numpy.ndarray'>