import multiprocessing
import os
def cube(num):
    print("Parent id of cube() = ",os.getppid())
    print("Process id of cube() : {}".format(os.getpid()))
    for i in range(1 , num):
        print("Cube of {} : {}".format(i , i*i*i))

    print("stop")

def square(num):
    print("Parent id of square() = ",os.getppid())
    print("Process id of square() : {}".format(os.getpid()))
    for i in range(1,num):
     print("Square of {} : {}".format(i , i*i))
    print("stop")

def main():
    print("Parent id of main() = ",os.getppid())
    print("Process id of main() = ",os.getpid())
    print('\n')
    p1 = multiprocessing.Process(target=cube , args=(5,))
    p2 = multiprocessing.Process(target = square , args=(5,))
    print('\n')

    p1.start()
    print(f"Is Cube() process is alive = {p1.is_alive()}")
    p1.join()
    print(f"Is Cube() process is alive = {p1.is_alive()}")
    print('\n')

    p2.start()
    print(f"Is Cube() process is alive = {p2.is_alive()}")
    p2.join()
    print(f"Is Cube() process is alive = {p2.is_alive()}")

if __name__ == "__main__":
    print('\n')
    main()
