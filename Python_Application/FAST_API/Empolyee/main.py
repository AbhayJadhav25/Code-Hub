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
    department : str
    salary : float

class UpdateEmployee(BaseModel):
    name : Optional[str] = None
    email : Optional[EmailStr] = None
    department : Optional[str] = None
    salary : Optional[float] = None

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

@employee_router.get('/view')
def view_emp():
    data = load_data()

    if len(data)==0:
        raise HTTPException(
            status_code=404 , 
            detail='Not data found'
        )
    
    return data

@employee_router.get('/view/{emp_id}')
def view_emp_with_id(emp_id : int):
    data = load_data()
    
    for emp in data :
        if emp['id'] == emp_id:
            return emp

    raise HTTPException(
        status_code=404 , 
        detail="Employee not found."
    )

@employee_router.put('/update/{emp_id}')
def update_emp(emp_id : int , emp : UpdateEmployee):
    data = load_data()
    existing_info = {}
    update_info = {}

    for e in data :
        if e['id'] == emp_id:
            
            update_info  = emp.model_dump(exclude_unset = True)

            for key , value in update_info.items():
                e[key] = value

            save_data(data)

            return JSONResponse(
                status_code=200 , 
                content={'message' : 'Updated Successfully'}
            )
    
    raise HTTPException(
        status_code=404 ,
        detail='Employee Not Found'
    )

@employee_router.delete('/delete/{emp_id}')
def delete(emp_id : int ):
    data = load_data()

    for e in data:
        if e['id'] == emp_id :
            data.remove(e)

            save_data(data)
            return JSONResponse(
                status_code=200 , 
                content={'message' : 'Employee deleted Successfully'}
            )
        
    
    raise HTTPException(
        status_code=404 , 
        detail='Employee Not Found'
    )


app.include_router(employee_router)

