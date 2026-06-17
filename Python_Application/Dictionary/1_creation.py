d1 = {}
print(d1) #{}

d2 = {"name" : "John" , "age" : 10}
print(d2)  #{'name' : 'John' , 'age' : 10}

d3 = dict(name = "John" , age =10)
print(d3) #{'name' : 'John' , 'age':10}

d4 = dict([("name","John") , ("age",10)])
print(d4) ##{'name' : 'John' , 'age':10}

d5 = {x : x*x for x in range(5)}
print(d5) #{0: 0, 1: 1, 2: 4, 3: 9, 4: 16}