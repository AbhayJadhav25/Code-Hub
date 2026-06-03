from pydantic import BaseModel , field_validator , EmailStr
from typing import List , Dict
class Patient(BaseModel):
    name : str
    email : EmailStr
    age : int
    weight : float
    married : bool
    allergies : List[str]
    contact_details : Dict[str , str]

    @field_validator('email')
    @classmethod
    def email_validator(cls , value):
        valid_domains = ['hdfc.com' , 'icici.com']
        domain_name = value.split('@')[-1]  #-1 ,last value of split list

        if domain_name not in valid_domains:
            raise ValueError('Not a valid domain')
        else:
            return  value
    
    @field_validator('name')
    @classmethod
    def transform_name(cls , value):
        return value.upper()

    @field_validator('age' , mode = 'after') #if mode is before it compares '30' with 0 and 100 which is not coreect .
    @classmethod
    def age_validator(cls , value):
        if 0 < value < 100 :
            return value
        else:
            raise ValueError('Age should be between 0 to 100')
        
def insert_patient_data(patient : Patient):  
    print(patient.name)
    print(patient.email)
    print(patient.age)
    print(patient.weight)
    print(patient.married)
    print(patient.allergies)
    print(patient.contact_details)
    print("inserted into database")
        
patient_info = {'name' : 'nitish' , 'email' : 'abcd@hdfc.com' , 'age' : '30' , 'weight' : 75.2 ,'married' : True,  'allergies' : ['pollen' , 'dust '] , 'contact_details' : {'email' : 'abc@gmail.com' , 'phone' : '1234567'}} 

patient1 = Patient(**patient_info) #unpack

insert_patient_data(patient1)