#empty list

a = []
print(a) #[]

b = [10 , 20 , 30]

#mixed values

c = [1 , "Python" , 3.5 , True]
print(c) #[1, 'Python', 3.5, True]

#from iterable
d = list("abc")
print(d) #['a', 'b', 'c']

#Access and update
print(b[0]) #10
print(b[-1]) #30

b[1] = 25
print(b) #[10,25,30]

# b[3] = 40 IndexError: list assignment index out of rangez


