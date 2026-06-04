from fastapi import FastAPI , Path ,HTTPException , Query 
import json
from fastapi.responses import JSONResponse
from pydantic import BaseModel , Field , computed_field
from typing import Annotated , Literal
app = FastAPI()

class Patient(BaseModel):
    id : Annotated[str , Field(... , description="Id of the patient" , example = ['P001'])]
    name : Annotated[str , Field(... , description="Name of the Patient" , example = ['Rahul'])]
    city : Annotated[str , Field(... , description='City of the patient')]
    age : Annotated[int , Field(... , gt = 0 , lt = 120 , description='Age of the patient')]
    gender : Annotated[Literal['male','female','other'] , Field(...,description='Gender of the patient')]
    height : Annotated[float , Field(...,gt = 0 , description='Height of the patient in mtrs')]
    weight : Annotated[float , Field(...,gt = 0 , description='Weight in kg')]

    @computed_field
    @property
    def bmi(self)->float:
        heigh_M = self.height / 100
        bmi = round((self.weight / heigh_M**2),2)
        return bmi
    
    @computed_field
    @property
    def verdict(self)->str:
        if self.bmi < 18.5:
            return 'Underweight'
        elif self.bmi < 25:
            return 'Normal'
        elif self.bmi < 30:
            return 'Overweght'
        else :
            return 'Obese'

def load_data():
    with open("patients.json" , "r") as fobj:
        data = json.load(fobj)
    return data

def save_data(data):
    with open("patients.json","w") as f:
        json.dump(data , f)

@app.get("/")
def hello():
    return{"message" : "Patient management System API"}

@app.get("/about")
def about():
    return {"message" : "A fully functional API to manage your patient record"}

@app.get("/view")
def view():
    data = load_data()
    return data

@app.get('/view/{patient_id}')
def view_patient(patient_id : str = Path(...,description = "ID of the Patient" , example = 'P002' , max_length = 4 , min_length = 4)):
    data = load_data()

    if patient_id in data:
        return data[patient_id]
    else:
       raise HTTPException(status_code = 404 , detail = "Patient not found")

@app.get('/sort')
def sort_patient(sort_by : str = Query(... , description = 'Sort on the basis of height , weight , bmi') , order : str = Query('asc' , description = "sort in asc and desc order")):

    valid_fields = ['height', 'weight' , 'bmi']

    if sort_by not in valid_fields:
        raise HTTPException(status_code = 400 , detail = f'Invalid field select from {valid_fields}')
    
    if order not in ['asc' , 'desc']:
        raise HTTPException(status_code = 400 , detail = "Invalid field select from ['asc' , 'desc']")
    
    data = load_data()

    sort_order = True if order=='desc' else False

    sorted_data = sorted(data.values() , key = lambda x: x.get(sort_by , 0) , reverse = sort_order)

    return sorted_data

@app.post('/create')
def create_patient(patient : Patient):
    #load existing data

    data = load_data()

    #check if the patient already exist
    if patient.id in data:
        raise HTTPException(status_code = 400 , detail = 'Patient alreay exist or one patient has exactly one unique id')
    
    #add new patient    
    data[patient.id] = patient.model_dump(exclude = ['id'])

    #save into json file
    save_data(data)

    return JSONResponse(status_code=201 , content={'message':'Message created successfully'})