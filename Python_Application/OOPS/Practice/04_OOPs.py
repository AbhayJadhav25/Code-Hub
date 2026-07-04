class BankAccount:
    def __init__(self , balance):
        self.balance = balance
    
acc = BankAccount(1000)
print(acc.__dict__['balance'])

acc2 = acc
print(id(acc))
print(id(acc2))

acc2.balance = 1200
print(acc.balance)  