#print 1 to N using tail recursion
def func(i , num):
    if num < 1:
        return
    func(i+1 , num-1)
    print(num , end = " ")
def main():
    num = int(input("Enter Number : "))
    func(1 , num)

if __name__ == "__main__":
    main()