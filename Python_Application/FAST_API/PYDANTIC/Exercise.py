from pydantic import BaseModel , EmailStr , Field , field_validator
from typing import List
from fastapi import FastAPI
class Student(BaseModel):
    name : str = Field(min_length=3 , max_length=50)
    age : int 
    email : EmailStr
    course : str
    skill : List[str] = Field(min_length=1)

    @field_validator('age')
    @classmethod
    def age_validate(cls , value):
        if not 18<=value<=30:
            raise ValueError('age must be in between 18 to 30')
        return value

app = FastAPI()
student_data = []

@app.get('/')
def root():
    return{
        'Message' : 'Student Admission Process API'
    }

@app.post('/students')
def admission(student : Student):
    student_data.append(student)
    return {
        'message' : 'Admission Successfull' ,
        'Student' : student
    }

student_dict = {
    'name' : 'Aditya',
    'age' : 20 ,
    'email' : 'abc@gmail.com',
    'course' : 'Java',
    'skill' :  ['C language']
}

Student1 = Student(**student_dict)

@app.get('/view')
def get_data():
    return{
        'student_data' : student_data
    }