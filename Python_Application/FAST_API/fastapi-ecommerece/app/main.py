from fastapi import FastAPI , HTTPException

app = FastAPI()

#static routes
@app.get('/')
def root():
    return {'message' : "Welcome to FastAPI"}

#dynamic routes
@app.get("/products/{id}")
def get_products(id:int):
    products = ['Brush' , 'Laptop' , 'Mouse' , 'Monitor']
    if id < len(products):
        return products[id]
    else:
        return HTTPException(status_code=404 , detail="Products not found")