from fastapi import FastAPI , APIRouter

app = FastAPI()

api_router = APIRouter(prefix = "/api/v1" , tags = ["products"])
@app.get("/")
def root():
    return {"message" : "Welcome"}

@api_router.get("/")
def api_route():
    return {"message" : "This is Sub router of APP"}

@app.get("/health")
def health():
    return {"status":"okk"}

@api_router.get("/products")
def product_list():
    return {"products":["pen" , "Bag" , "Waterbottle"]}

app.include_router(api_router)
