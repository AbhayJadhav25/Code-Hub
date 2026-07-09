import multiprocessing
result = []

def square(mylist):
    global result
    for i in mylist:
        result.append(i*i)

    print(f"Result (in Process 1) = {result}")

if __name__ == "__main__":
    mylist = [1,2,3,4]
    p1 = multiprocessing.Process(target=(square) , args=(mylist,))
    p1.start()

    print(result)