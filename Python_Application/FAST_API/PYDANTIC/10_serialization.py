from pydantic import BaseModel
class Address(BaseModel):
    city : str
    state : str
    pin : int

class Patient(BaseModel):
    name : str
    gender : str = 'Male'
    age : int 
    address : Address

address_dict = {'city' : 'Ahilyanagar' , 'state' : 'Maharashtra' , 'pin' : 414003}
address1 = Address(**address_dict)

patient_dict = {'name' : 'om' , 'gender' : 'Male' , 'age' : 20 , 'address' : address1}
patient1 = Patient(**patient_dict)

temp = patient1.model_dump()
print(temp)
print(type(temp))

temp = patient1.model_dump_json()
print(temp)
print(type(temp))

temp = patient1.model_dump(include = ['name' , 'gender'])
print(temp)

temp = patient1.model_dump(exclude = ['name' , 'gender'])
print(temp)

temp = patient1.model_dump(exclude = {'address' :['state']})
print(temp)

temp = patient1.model_dump(exclude_unset=True) #we can't see the value of Gender if we not define this in out dict
print(temp)

