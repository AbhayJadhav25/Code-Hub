from fastapi import FastAPI , Depends , HTTPException , Query
from typing import Annotated 

app = FastAPI()

def load_data():
    employees = [
    {
        "id": 1,
        "name": "Abhay",
        "department": "Backend",
        "salary": 55000
    },
    {
        "id": 2,
        "name": "Priya",
        "department": "Frontend",
        "salary": 48000
    },
    {
        "id": 3,
        "name": "Rahul",
        "department": "DevOps",
        "salary": 62000
    },
    {
        "id": 4,
        "name": "Sneha",
        "department": "QA",
        "salary": 45000
    }
    ]

    return employees

def get__data():
    return load_data()

def get_message():
    return "Welcome to DI"

def vallidate_salary(salary : float):
    if salary < 0:
        raise HTTPException(
            status_code=400 , 
            detail="Salary can't be negative"
        )
    return salary
@app.get("/")
def root(msg = Depends(get_message)):
    return{
        "message" : msg
    }

@app.get("/employee")
def employee(data = Depends(get__data)):
    if data:
        return data
    else:
        raise HTTPException(
            status_code=404 , 
            detail="Data not found"
        )
    
@app.get("/employee/{emp_id}")
def employee_id(emp_id : int,data = Depends(get__data)):
    for emp in data:
        if emp_id == emp['id']:
            return emp
        
    raise HTTPException(
        status_code=404,
        detail="User not found"
    )


@app.get('/salary')
def salary(salary : float =  Depends(vallidate_salary)):
    return {
        "salary" : salary
    }
