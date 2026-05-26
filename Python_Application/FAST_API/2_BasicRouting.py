from fastapi import FastAPI

app = FastAPI()

@app.get("/")
def root():
    return {"message":"Let's learn Routing"}

@app.get("/health")
def health():
    return {"Status" : "Ok"}

@app.get("/health/sugar")
def sugar(range : int  ):
    if(range < 120):
        return {"result":"Negative"}
    else:
        return{"result" : "Positive"}

@app.post("/login")
def login():
    return {"message" : "Login Endpoint"}
