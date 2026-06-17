class Cache:
    def __init__(self):
        self.store = {}

    def set(self , key , value):
        self.store[key] = value

    def get(self ,key):
        return self.store.get(key ,None)
    
    def delete(self , key):
        if key in self.store:
            del self.store[key]

cache = Cache()
cache.set("user_1" , "amit")
cache.set("user_2" , "Suraj")

value = cache.get("user_1")
print(value)

cache.delete("user_1")