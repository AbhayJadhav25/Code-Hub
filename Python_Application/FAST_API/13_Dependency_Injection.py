from fastapi import FastAPI , Depends

app = FastAPI()

def get_message():
    return "Welcome to FastAPI"

@app.get("/")
def root(msg : str = Depends(get_message)):
    return {
        "message" : msg
    }

@app.get("/help")
def help(msg : str = Depends(get_message)):
    return{
        'msg' : msg
    }

