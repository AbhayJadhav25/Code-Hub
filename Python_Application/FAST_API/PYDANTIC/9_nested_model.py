from pydantic import BaseModel
class Address(BaseModel):
    city : str
    state : str
    pin : int

class Patient(BaseModel):
    name : str
    gender : str
    age : int 
    address : Address

address_dict = {'city' : 'Ahilyanagar' , 'state' : 'Maharashtra' , 'pin' : 414003}
address1 = Address(**address_dict)

patient_dict = {'name' : 'om' , 'gender' : 'Male' , 'age' : 20 , 'address' : address1}
patient1 = Patient(**patient_dict)

temp = patient1.model_dump()
print(temp)
print(type(temp))
