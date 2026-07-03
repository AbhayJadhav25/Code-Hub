balance = 1000

def deposit(amount):
    global balance
    balance+=amount

deposit(500)
print(globals()['balance'])