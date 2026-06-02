from fastapi import FastAPI 
from pydantic import BaseModel , Field


app = FastAPI()

students = []

class Student(BaseModel):
    name : str
    age : int = Field(gt=18 , lt = 30)
    course : str
    
@app.post("/student")
def create_student(student : Student):
    students.append(student)
    return {
        'message' : 'Student Added',
        'data' : student
    }

@app.get('/view')
def get_stud():
    return students