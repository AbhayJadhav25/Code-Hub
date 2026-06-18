from pydantic import BaseModel , StrictInt , EmailStr , AnyUrl 
from typing import List , Dict , Optional
class Patient(BaseModel):
    name : str
    email : EmailStr
    linkedin : AnyUrl
    age : int
    weight : float
    married : bool = False #set default value
    allergies : Optional[List[str]] = None  
    contact_details : Dict[str , str]

def insert_patient_data(patient : Patient):  
    print(patient.name)
    print(patient.email)
    print(patient.age)
    print(patient.weight)
    print(patient.married) #False
    print(patient.allergies) #None
    print(patient.contact_details)
    print("inserted into database")
        
patient_info = {'name' : 'nitish' ,'email' : 'abc@gmail.com', 'linkedin' : 'https://google.com','age' : '30' , 'weight' : 75.2 , 'contact_details' : {'email' : 'abc@gmail.com' , 'phone' : '1234567'}} 

patient1 = Patient(**patient_info) #unpack

insert_patient_data(patient1)