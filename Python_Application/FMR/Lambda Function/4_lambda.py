#Lambda returned froom an enclosing function

def multiplier(n):
    return lambda a : a*n

double = multiplier(2)  #value of n
ans = double(11)  #value of lambda's a  it is equivalent ans = lambda a : a*n

print(ans)
