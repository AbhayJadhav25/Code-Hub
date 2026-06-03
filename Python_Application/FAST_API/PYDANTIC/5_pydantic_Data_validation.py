from pydantic import BaseModel , StrictInt , EmailStr , AnyUrl , Field 
from typing import List , Dict , Optional
class Patient(BaseModel):
    name : str = Field(default=None , max_length = 15 , title = 'Name of the patient')
    email : EmailStr
    linkedin : AnyUrl
    age : int = Field(gt=0 , lt = 25 , strict=True) # '''Same as StrictInt'''
    weight : float = Field(gt=0)
    married : bool = False #set default value
    allergies : Optional[List[str]] = Field(default=None , max_length=5)    
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
        
patient_info = {'email' : 'abc@gmail.com', 'linkedin' : 'https://google.com','age' : 22 , 'weight' :75.2 , 'contact_details' : {'email' : 'abc@gmail.com' , 'phone' : '1234567'}} 

patient1 = Patient(**patient_info) #unpack

insert_patient_data(patient1)