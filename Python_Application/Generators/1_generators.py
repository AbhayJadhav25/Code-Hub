def function():
    yield "First Statement"
    yield "Second Statement"
    yield "Third Statement"

gen = function()
print(gen)  #<generator object function at 0x000001E4228C4D50> so it just create generator object not call to the function

print(next(gen))    #First Statement    actual calling
for i in gen:
    print(i)