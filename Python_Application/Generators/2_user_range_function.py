def user_range(start , end):
    for i in range(start , end):
        yield i

gen = user_range(1,10)
for i in gen:
    print(i)