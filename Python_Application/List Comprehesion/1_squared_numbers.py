#simple list
nums = [1 ,2 , 3, 4]
result= []

for num in nums:
    result.append(num**2)

print(result)

#using list Comprehension
result2 = [num **2 for num in nums]
print(result2)