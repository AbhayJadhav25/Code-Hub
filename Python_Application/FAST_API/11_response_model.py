from pydantic import BaseModel
from fastapi import FastAPI
from typing import List
class StudentCreate(BaseModel):
    name : str
    email : str
    password : str

class StudentResponse(BaseModel):
    id : int
    name : str
    email : str

app = FastAPI()
student_data = []
@app.post('/students' , response_model = StudentResponse)
def create_student(student : StudentCreate):
    new_student = {
        'id' : len(student_data)+1 ,
        'name' : student.name ,
        'email' : student.email
    }
    student_data.append(new_student)

    return new_student

@app.get('/students' , response_model = List[StudentResponse])
def get_student():
    return student_data
    