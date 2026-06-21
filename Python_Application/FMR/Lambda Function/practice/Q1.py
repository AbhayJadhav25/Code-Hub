#Q1. Use `sorted()` with a lambda key to sort a list of `(name, score)` tuples by score descending, breaking ties alphabetically by name.

students = [("Alice", 90), ("Bob", 95), ("Charlie", 90)]
sort_by_name = sorted(students , key = lambda x : (-x[1] , x[0]) )
print("Students are sorted based on alphabets in reversed order")
print(sort_by_name)

