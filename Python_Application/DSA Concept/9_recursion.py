#N to 1 using Tail recusion
def func(i, num):
    if num == 0 :
        return
    
    func(i+1 , num - 1)
    print(i , end = " ")
    

def main():
    num = int(input("Enter Number : "))
    func(1 , num)

if __name__ == "__main__":
    main()