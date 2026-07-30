class user_range:
    def __init__(self , start , end):
        self.start = start
        self.end = end

    def __iter__(self):
        return range_iter(self)

class range_iter:
    def __init__(self , iterable_obj):
        self.iterable = iterable_obj

    def __iter__(self):
        return self

    def __next__(self):
        if self.iterable.start >= self.iterable.end:
            raise StopIteration

        current = self.iterable.start
        self.iterable.start+=1
        return current

for i in user_range(1,11):
    print(i)