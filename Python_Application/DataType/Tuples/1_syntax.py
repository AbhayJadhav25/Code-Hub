#Diiferent ways to create tuple

# t = (10,20,30)
# print(t)
# print(type(t)) #<class 'tuple'>

# t = 10,20,30
# print(t)
# print(type(t)) #<class 'tuple'>


# t = ()
# print(t) #()
# print(type(t)) #<class 'tuple'>

#using tuple()
t = tuple([10,20,30])
print(t)
print(type(t))  #<class 'tuple'>

#t[3] =30  #'tuple' object does not support item assignment

def add():
    return 10+20 

def add2():
    return 10+20 , 30+50

result = add()
print(type(result))  #<class 'int'>

result2 = add2()
print(type(result2)) #<class 'tuple'>

t = 1,
print(t) #(1,)
print(type(t))  ##<class 'tuple'>

t = (10)
print(type(t)) #<class 'int'>