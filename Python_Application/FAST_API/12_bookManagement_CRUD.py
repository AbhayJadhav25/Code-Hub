from pydantic import BaseModel
from fastapi import FastAPI , HTTPException 
from fastapi.responses import JSONResponse
from typing import Optional 
import json

app = FastAPI()

class CreateBook(BaseModel):
    title : str
    author : str
    price : float

class BookResponse(BaseModel):
    id : int
    title : str
    author : str
    price : float

class UpdateBook(BaseModel):
    title : Optional[str] = None
    author : Optional[str] = None
    price : Optional[float] = None

books = []

def load_data():
    with open('book.json' , 'r') as fobj:
        data = json.load(fobj)
    return data

def save_data(data):
    with open('book.json' , 'w') as f:
        json.dump(data , f)

@app.get('/')
def root():
    return {
        'message' : 'Book Management System API'
    }


@app.post('/create' , response_model = BookResponse)
def create(book : CreateBook):
    for b in books:
        if b['title'] == book.title:
            raise HTTPException(
                status_code=400 , 
                detail = 'Book with same title not allowed'
            )
        
    new_data = {
        "id" : len(books)+1,
        "title" : book.title , 
        "author" : book.author , 
        "price" : book.price
    }
    books.append(new_data)
    return new_data

@app.get('/view' )
def view_books():
    if len(books)==0:
        raise HTTPException(
            status_code=404 , 
            detail = 'Book not found'
        )
    
    return books

@app.get('/view/{book_id}')
def view_book_with_id(book_id : int):
    for b in books:
        if b['id'] == book_id:
            return b
        
    raise HTTPException(
        status_code=404 ,
        detail = 'Book Not Found'
    )

@app.patch('/update/{book_id}')
def update_book(book : UpdateBook , book_id : int):
    
    for b in books:
        if b['id'] == book_id:
            b['price'] = book.price

            return JSONResponse(
            status_code= 200 ,
            content={'message' : 'Price Updated'}
        )

    raise HTTPException(
            status_code=404 ,
            detail='Book Not Found'
        )

   
@app.delete('/delete/{book_id}')

def delete_book(book_id : int):
    # for index , b in enumerate(books):
    #     if b['id'] == book_id:
    #         books.pop(index)

    for book in books:
        if book['id'] == book_id:
            books.remove(book)

            return JSONResponse(
                status_code=200 , 
                content={'message' : 'book removed Successfully'}
            )
    
    raise HTTPException(
        status_code=404 ,
        detail='Book not found'
    )
    