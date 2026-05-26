from typing import Annotated
from fastapi import FastAPI , Path

app = FastAPI()

@app.get("/users/{user_id}")
def get_user(user_id : Annotated[int , Path(lt=10)]):
    return {
        "user_id" : user_id
    }

@app.get("/users/{user_id}/payment/{amount}")
def get_user_order(
    user_id : Annotated[int , Path(gt = 0)] ,
    amount : Annotated[float , Path(gt = 1000)]
):
    return{
        "user_id" : user_id,
        "Payment" : amount
    }