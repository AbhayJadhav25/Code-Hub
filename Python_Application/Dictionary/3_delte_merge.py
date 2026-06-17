d = {"name":"John" , "age" : 10}
del d['age']
print(d) #{'name' : 'John'}

d1 = {'name' : 'Amit' , 'age' : 12}
removed = d1.pop('age')
print(d1) #{'name' : 'Amit}
print(removed) #12

#Merge
a = {'x' : 1, 'y' : 2}
b = {'y' : 99 , 'z' :3}

c = a | b
print(c)  #{'x':1 , 'y' : 99 , 'z':3}

# a = a | b
# print(a) ##{'x':1 , 'y' : 99 , 'z':3}

a |= b #---> a = a|b 
print(a) #{'x':1 , 'y' : 99 , 'z':3}