from fastapi import FastAPI , Depends , HTTPException

app = FastAPI()

def validate_limit(limit : int = 1000):
    if limit > 100:
        raise HTTPException(
            status_code=400 ,
            detail="Limit too large must be under 100"
        )
    return limit

def get_message():
    return "Learn Dependency Injection"

@app.get("/")
def root(msg : str = Depends(get_message)):
    return {
        "message" : msg
    }

@app.get("/employees")
def get_employees(limit : int = Depends(validate_limit)):
    return{
        "limit" : limit
    }