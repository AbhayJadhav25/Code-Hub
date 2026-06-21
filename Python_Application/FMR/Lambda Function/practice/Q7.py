#7. **HackerRank — Map and Lambda Function**: https://www.hackerrank.com/challenges/map-and-lambda-expression/problem (generate Fibonacci numbers, then cube each one using `map` and a lambda).

def fibonacci(num):
    a ,b = 0 , 1
    result = []
    for i in range(num):
        result.append(a)
        a , b = b , a+b
    return result

lst = fibonacci(5)
cubes = list(map(lambda x : x**3 , lst))
print(cubes)

cube = lambda x : x**3
def fibonacci(num):
    if num==1 :
        return [0]
    if num==2:
        return [0,1]
    a = 0 
    b = 1
    fibo = [0 , 1]
    for i in range(2 , num):
        c = a+b
        fibo.append(cube(c))
        a = b
        b = c
    return fibo

print(fibonacci(5))