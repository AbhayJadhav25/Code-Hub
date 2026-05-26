from fastapi import FastAPI

app = FastAPI()

@app.get("/users/{user_id}")
def get_user(user_id : int):
    return{
        "user_id" : user_id ,
        "message" : "User Found"
    }

@app.get("/users/{user_id}/orders/{order_id}")
def get_user_order(user_id : int , order_id:int):
    return{
        "user_id" : user_id,
        "order_id" : order_id,
        "message" : "User Found"
    }