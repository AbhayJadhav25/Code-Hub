from pydantic import BaseModel , StrictInt
from typing import List , Dict
class Patient(BaseModel):
    name : str
    age : int
    weight : float
    married : bool
    allergies : List[str]
    contact_details : Dict[str , str]

def insert_patient_data(patient : Patient):  
    print(patient.name)
    print(patient.age)
    print(patient.weight)
    print(patient.married)
    print(patient.allergies)
    print(patient.contact_details)
    print("inserted into database")
        
patient_info = {'name' : 'nitish' , 'age' : '30' , 'weight' : 75.2 ,'married' : True,  'allergies' : ['pollen' , 'dust '] , 'contact_details' : {'email' : 'abc@gmail.com' , 'phone' : '1234567'}} 

patient1 = Patient(**patient_info) #unpack

insert_patient_data(patient1)