#Create a dictionary mapping numbers to cubes.
num = 5
res = {num : num**3 for num in range(1,6)}
print(res)  

#Create a dictionary containing only odd numbers and their squares.
res = {num : num**2 for num in range(20) if num % 2 ==0}
print(res)

#Convert a list of names into {name: length}.
lst = ["Abhay" , "Mayur" , "Rohit" , "Ram" , "Shyam"]
res = {name : len(name) for name in lst}
print(res)

#Reverse a dictionary
student_marks = {
    "Alice": 85,
    "Bob": 90,
    "Charlie": 85,
    "David": 92
}

res = {value : [key for key , v in student_marks.items() if v==value ] for _ , value in student_marks.items() }
print(res)


#Count character frequencies in a string.
string = 'GeeksForGeeks'
string = string.lower()
res = {ch : string.count(ch) for ch in string}
print(res)


#Group students by department.
students = [
    ("Alice", "Computer Science"),
    ("Bob", "Mathematics"),
    ("Charlie", "Computer Science"),
    ("David", "Physics"),
    ("Eve", "Mathematics")
]

res = {value : [key for key , val in students if val==value] for _ , value in students}
print(res)

#Find the first non-repeating character.
str = "aaaabbbb"
res = {ch : str.count(ch) for ch in str}
for key , val in res.items():
    if res[key] == 1:
        print(f'first non repeating character is {key}')
        exit(0)
print("All characters occurs more than two times")


#Create a lookup table for grades
grades_lookup = {
    "A": (90, 100),
    "B": (80, 89),
    "C": (70, 79),
    "D": (60, 69),
    "F": (0, 59)
}

student_scores = {
    "Alice": 95,
    "Bob": 82,
    "Charlie": 67,
    "David": 50
}

res = {key : val for key , value in student_scores.items() for val , (low,high) in grades_lookup.items() if low<=value<=high }
print(res)

#Convert a list of tuples into a dictionary
students = [
    ("Alice", 85),
    ("Bob", 90),
    ("Charlie", 78),
    ("David", 92)
]

res = {key : value for key , value in students}
print(res)


#Merge two dictionaries.
dict1 = {
    "Alice": 85,
    "Bob": 90
}

dict2 = {
    "Charlie": 78,
    "David": 92
}

dict1 |= dict2
print(dict1)