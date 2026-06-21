#Q6. Given a list of dictionaries representing employees with `name`, `department`, and `salary`, sort by department ascending and salary descending using a single lambda key.

employees = [
    {"name": "Alice", "department": "HR", "salary": 50000},
    {"name": "Bob", "department": "IT", "salary": 60000},
    {"name": "Charlie", "department": "IT", "salary": 55000},
]

sort = sorted(employees , key = lambda x : (x['department'] , -x['salary']) )

print(sort)