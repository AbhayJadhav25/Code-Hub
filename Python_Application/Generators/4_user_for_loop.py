def user_defined_for_loop(lst):
    lst_iter = iter(lst)

    while True:
        try:
            print(next(lst_iter))
        except StopIteration:
            break
def main():
    a = [1,2,3,4]
    user_defined_for_loop(a)

    print("Print Tuple")
    user_defined_for_loop((1,2,3,4))

    print("Print set values")
    user_defined_for_loop({1,2,3,1})

    print("Print Dictionary Keys")
    user_defined_for_loop({1:1 , 2:2})
if __name__ == "__main__":
    main()