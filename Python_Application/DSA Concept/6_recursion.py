#print 1 to N using recursion
def func(i , num):
    if i>num:
        return
    print(i , end=" ")
    func(i+1 , num)
    
def main():
    num = int(input("Enter Number : "))
    func(1 , num)
if __name__ == "__main__":
    main()