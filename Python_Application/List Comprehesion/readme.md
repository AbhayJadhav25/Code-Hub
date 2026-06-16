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

    it is mostly used for mapping , filtering , mapping+filtering