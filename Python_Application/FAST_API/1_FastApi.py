from fastapi import FastAPI

app = FastAPI()

@app.get("/")
def root():
    return {"message":"Hello , FastAPI"}

@app.get("/health")
def  root():
    return {"status":"okgit "}

    