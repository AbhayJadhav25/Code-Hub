from pydantic import BaseModel , model_validator , EmailStr
from typing import List , Dict
class Patient(BaseModel):
    name : str
    email : EmailStr
    age : int
    weight : float
    married : bool
    allergies : List[str]
    contact_details : Dict[str , str]

    @model_validator(mode='after')
    def validate_emergency_contact(cls , model):
        if model.age > 60 and 'emergency' not in model.contact_details:
            raise ValueError('Patients older than 60 must have an emergency contact')
        return model
        
def insert_patient_data(patient : Patient):  
    print(patient.name)
    print(patient.email)
    print(patient.age)
    print(patient.weight)
    print(patient.married)
    print(patient.allergies)
    print(patient.contact_details)
    print("inserted into database")
        
patient_info = {'name' : 'nitish' , 'email' : 'abcd@hdfc.com' , 'age' : '65', 'weight' : 75.2 ,'married' : True,  'allergies' : ['pollen' , 'dust '] , 'contact_details' : {'email' : 'abc@gmail.com' , 'phone' : '1234567' , 'emergency' : '12344'}} 

patient1 = Patient(**patient_info) #unpack

insert_patient_data(patient1)