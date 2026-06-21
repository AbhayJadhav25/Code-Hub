words = ['banana' , 'kiwi' , 'apple' ,'fig']
by_length = sorted(words , key = lambda x : len(x))
by_length_then_alpha = sorted(words , key = lambda x : (len(x) , x))

print(by_length)
print(by_length_then_alpha)

employees = [
    {'name' : 'A' , 'salary' : 90} , 
    {'name' : 'B' , 'salary' : 90} , 
    {'name' : 'c' , 'salary' : 70} , 
]

ranked = sorted(employees , key = lambda e : (e['salary'] , e['name']))
print(ranked)

#if -e['salary'] here -e it means sorting salary in descending order

data = [
    ('A' , 170) , 
    ('B' , 182) , 
    ('C' , 175) , 
]

tallest = max(data , key = lambda x : x[1])
print(tallest)