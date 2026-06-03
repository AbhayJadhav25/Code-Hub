from pydantic import BaseModel , StrictInt

class Patient(BaseModel):
    name : str
    # age : int  -> also work '30' which is string.
    age : StrictInt  #strictly requirwed int only.

def insert_patient_data(patient : Patient):  
    print(patient.name)
    print(patient.age)
    print("inserted into database")
        
patient_info = {'name' : 'nitish' , 'age' : '30'} #it is still working , when we use StrictInt it will raise an error

patient1 = Patient(**patient_info)

insert_patient_data(patient1)