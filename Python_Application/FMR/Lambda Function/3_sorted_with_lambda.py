pairs = [(1,'one') , (2,'Two') , (3,'Three') , (4 , 'Fours')]
pairs.sort(key = lambda pair : pair[1])
print(pairs)

students = [
    ('Aman' , 78),
    ('Neha' , 92),
    ('Ravi' , 85)
]

result = sorted(students , key = lambda x : x[1])
print(result)