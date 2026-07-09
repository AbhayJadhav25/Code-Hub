import multiprocessing
def cube(num):
    for i in range(1 , num):
        print("Cube of {} : {}".format(i , i*i*i))
def square(num):
    for i in range(1,num):
     print("Square of {} : {}".format(i , i*i))

def main():
    p1 = multiprocessing.Process(target=cube , args=(1000,))
    p2 = multiprocessing.Process(target = square , args=(1000,))

    p1.start()
    p1.join()
    p2.start()
    p2.join()
if __name__ == "__main__":
    main()
