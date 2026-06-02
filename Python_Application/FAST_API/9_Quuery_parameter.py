from fastapi import FastAPI , Query

app = FastAPI()

@app.get('/books')
def get_book(q : str | None = None , page : int = 1 , limit : int = 10 , avilable : bool = False):
    return {
        'Book Name' : q ,
        'page' : page , 
        'limit' : limit , 
        'avilable' : avilable
    }  