def cube(num):
    return num**3

nums = [1,2,3,4,5]
result = [cube(num) for num in nums]
print(result)