from fastapi import FastAPI , APIRouter , HTTPException
from pydantic import BaseModel , EmailStr 
from fastapi.responses import JSONResponse
from typing import Optional , Annotated 
import json

app = FastAPI()

def load_data():
    with open('employee.json' , 'r') as fobj:
        data = json.load(fobj)
    
    return data

def save_data(data):
    with open('employee.json' , 'w') as f:
        json.dump(data , f , indent=4)
employee_router = APIRouter(prefix='/employee' , tags = ["employee"])


class CreateEmployee(BaseModel):
    id : int
    name : str
    email : EmailStr
    departmen : str
    salary : float

@employee_router.get("")
def root():
    return{
        'message' : 'employee CRUD API'
    }


@employee_router.post('/create')
def create_emp(employee : CreateEmployee):
    data = load_data()

    for emp in data:
        if emp['id'] == employee.id:
            raise HTTPException(
                status_code=400 , 
                detail='employee with same id exists'
            )
    
    data.append(employee.model_dump())
    save_data(data)

    return JSONResponse(
        status_code=201  ,
        content={"message" : "Employee Created Successfully"}
    )

app.include_router(employee_router)

