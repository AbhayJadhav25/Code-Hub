student = {'name' : 'John' , 'age' : 20}
print(student.keys()) 

print(student.values())

print(student.items())  #dict_items([('name', 'John'), ('age', 20)])

print(student.get('age' , 30))
print(student.get('city','pune'))

student_update = {'name' : 'Abhay' , 'age' : 20 , 'gender' : 'male'}

student.update(student_update)
print(student)

#pop
# pop = student.pop('gender')
# print(pop)  #male

print(student.popitem())  #('gender', 'male')

print(student)
#setdefault()
emp = {'name' : 'abhay' , 'age' : 20 , 'skills' : ['python']}
result = {}
# for key , value in emp.items():
#     result.setdefault(value , []).append(key)

# print(result)

#copy()
b = emp
# b['name'] = 'aditya'  #changes happen in emp dict also.both point to the same memory objects.
print(emp)

c = emp.copy()  
c['name'] = 'aditya'  #emp remains unchanged.
print(emp)

c['skills'].append('MySQL')
print(emp)

#fromkeys()
keys = ["name" , "age"]
d = dict.fromkeys(keys ,("Abhay" , 20))
print(d)

emp.clear()
print(emp)

student.clear()
print(student)