from fastapi import FastAPI , Path ,HTTPException
import json

app = FastAPI()

def load_data():
    with open("patients.json" , "r") as fobj:
        data = json.load(fobj)
    return data

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