#Q5. Build a four-operation calculator using a dictionary of lambdas instead of an `if/elif` chain, and explain what happens if an unsupported operator key is requested.

calculator = {
    '+' : lambda x , y : x+y ,
    '-' : lambda x , y : x-y ,
    '*' : lambda x , y : x*y ,
    '/' : lambda x , y : x/y ,
}

res = calculator['%'](10,5)
print(res)

#if we give unsupported operator as argument key , it raise a KeyError.