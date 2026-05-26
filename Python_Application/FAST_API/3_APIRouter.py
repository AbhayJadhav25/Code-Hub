from fastapi import FastAPI , APIRouter

app = FastAPI()

items_router = APIRouter(prefix = "/items",tags = ["items"])

@items_router.get("/")
def list_items():
    return {"items" : ["pen" , "pencil"  , "bag"]}

@items_router.get("/latest")
def latest():
    return {"item":"Bag"}

health_router = APIRouter(prefix = "/health" , tags = ["health"])

@health_router.get("/")
def health():
    return {"Status" : "ok"}

@health_router.get("/sugar")
def sugar(range : int):
    if range > 120:
        return {"Result" : "Positive"}
    else:
        return {"Result" : "Negative"}
    
app.include_router(items_router)
app.include_router(health_router)
