#lambda inside a dispatch dictionary

operations = {
    '+' : lambda a , b : a+b ,
    '-' : lambda a , b : a+b , 
    '*' : lambda a , b : a*b , 
    '/' : lambda a , b : a//b 
}

ans = operations['*'](6,7)
print(ans)