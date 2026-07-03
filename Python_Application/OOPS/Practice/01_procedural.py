def create_account(name , balance):
    return {'name' : name , 'balance' : balance}

def deposit(account , amount):
    account['balance'] += amount

account = create_account('abhay' , 12000)
print(account)

deposit(account , 5000)
print(account)