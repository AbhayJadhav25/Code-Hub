d = {"name" : "John" , "age" : 10}
name = d['name']
print(name)
#name = "Abhay" #Changes not happen in dict
d['name'] = "Abhay"
print(d['name']) #Changes happen in original dict.

value = d.get("city" , "Mumbai") #mumbai is default
print(value)

name = d.get('name')
print(name)