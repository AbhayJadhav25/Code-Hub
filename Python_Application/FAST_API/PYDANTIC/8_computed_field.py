from pydantic import BaseModel , computed_field , EmailStr
from typing import List , Dict
class Patient(BaseModel):
    name : str
    email : EmailStr
    age : int
    height : float
    weight : float
    married : bool
    allergies : List[str]
    contact_details : Dict[str , str]

    @computed_field
    @property
    def calculate_bmi(self)-> float:
        bmi = round((self.weight / self.height)**2 , 2)
        return bmi
        
def insert_patient_data(patient : Patient):  
    print(patient.name)
    print(patient.email)
    print(patient.age)
    print(patient.weight)
    print(patient.married)
    print(patient.allergies)
    print(patient.contact_details)
    print('BMI = ' , patient.calculate_bmi)
    print("inserted into database")
        
patient_info = {'name' : 'nitish' , 'email' : 'abcd@hdfc.com' , 'age' : '65','height' : 170.5, 'weight' : 75.2 ,'married' : True,  'allergies' : ['pollen' , 'dust '] , 'contact_details' : {'email' : 'abc@gmail.com' , 'phone' : '1234567'}} 

patient1 = Patient(**patient_info) #unpack

insert_patient_data(patient1)