from fastapi import FastAPI , APIRouter

app = FastAPI()

student_router = APIRouter(prefix = "/students" , tags = ["students"])

@student_router.get("/{student_id}")
def get_student(student_id : int):
    return {"student_id" : student_id , "message" : "User Found"}

@student_router.get("/{student_id}/courses/{course_id}")
def get_student_course(student_id : int , course_id : int):
    return {
        "student_id" : student_id,
        "course_id" : course_id,
        "message" : "Course Found"
    }

app.include_router(student_router)