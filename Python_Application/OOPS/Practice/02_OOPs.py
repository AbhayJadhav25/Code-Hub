class BankAccount:
    def __init__(self , name , balance):
        self.name = name 
        self.balance = balance

    def deposit(self , amount):
        self.balance += amount

p1 = BankAccount('John' , 15000)
p1.deposit(5000)

print(p1.balance)