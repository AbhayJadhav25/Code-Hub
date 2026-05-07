#N to 1 using Head recusion
def func(num):
    if num == 0:
        return
    
    print(num , end = " ")
    func(num - 1)

def main():
    num = int(input("Enter Number : "))
    func(num)

if __name__ == "__main__":
    main()