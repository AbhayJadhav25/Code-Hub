groups  = {}
for name , dept in [('Aman','IT'),
                    ('Neha','HR') , 
                    ('Ravi','IT')]:
    groups.setdefault(dept ,[]).append(name)

print(groups)

#practice 1
d = {'name' : 'John'}
result = d.setdefault('name' , 'Abhay')
print(result)

#practice 2
emp = [
     {'name' : 'Abhay' , 'age' : 20 , 'dept' :'IT' } ,
     {'name' : 'Ram' , 'age' : 25 , 'dept' : 'IT'}
]

result = {}

for empolyee in emp:
    result.setdefault(empolyee['dept'] , []).append(empolyee['name'])

print(result)

#practice 3
student = [
    {"name" : 'om' , 'age' : 25},
    {'name' : 'sai' , 'age' : 25},
    {'name' : 'Ram' , 'age' :20}
]

result = {}
for stud in student:
    result.setdefault(stud['age'] , []).append(stud['name'])

print(result)