# Syntax
[expression for item in iterable]

# syntax with condition
[expression for item in iterable if condition]

# syntax with multiple condition
[expression for item in iterable
    if condition1 
    if condition2
]

# conditional expression
[value_if_true if condition else value_if_false 
    for item in iterable
]

#  nested comprehension
[expression
 for outer in iterable1
 for inner in iterable2
] 

#   Notes
    ~Everything happens in one compact pipeline.

    !=  -> Comparisons Operator
    not -> logical Operator

    it is mostly used for mapping , filtering , mapping+filtering , nested lists , string processing , conditional output , 

# list comprehension --> [x for x in range(1000)]
    ~create the entire list immediately

# list generator --> (x for x in range(1000))
    ~produces values lazily
    ~less memory usage

# "".join(list_name)  -->best way to convert list into string.seprate the element without space. we can seprate with different character also.

# strip() removes leading and trailing whitespace. If the resulting string is empty (""), it evaluates to False,

# synatx for 2D array
result = [matrix[i][j] for i in range(len(matrix)) for j in range(len(matrix[0]))]
result = [[matrix[i][j] for outer loop ] for inner loop]

# split() -> break a string into multiple parts and returns them as a string.