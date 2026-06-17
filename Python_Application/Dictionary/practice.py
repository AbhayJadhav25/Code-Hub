#1 ) Build a frequency dictionary for a list of numbers and return the most frequent number.

def Q1():
    nums = [1,2,1,3,2,3,4,1,2,1,5]
    freq = {}
    for num in nums:
        freq[num] = freq.get(num , 0)+1
    print(freq)

    maximum = max(freq , key = freq.get)
    print(maximum)

#Given a sentence, count word frequency ignoring case and punctuation.
import re
def Q2():
    Sentence = "Hello , world ! Hello Copilot ; hello user."
    words = re.findall(r'\w+' , Sentence.lower())
    print(words)
    freq = {}

    for word in words:
        freq[word] = freq.get(word , 0)+1

    print(freq)

#3) Merge two dictionaries where values from the second dictionary should overwrite the first. Interview-style idea: use | for a new result or |= for in-place update

def Q3():
    stud = {"name" : "Abhay" , 'age' : 22 ,'gender' : 'male'}
    stud2 = {"name" : "Ram" , 'age' : 20}

    stud |= stud2
    stud2 |= stud
    print(stud)
    print(stud2)

#4) Write a function that returns the first non-repeating character using a dictionary
def Q4():
    word = "swiss"
    freq = {}
    for ch in word:
        freq[ch] = freq.get(ch , 0)+1
    print(freq)

    for ch in freq:
        if freq[ch] == 1:
            print(ch)
            break

#5) Given a dictionary of student marks, return all students who scored above 80.
def Q5():
    student_marks = {
    "Amit": 75,
    "Pooja": 92,
    "Rahul": 65,
    "Sneha": 85,
    "Rohit": 45,
    "Neha": 95,
    "Sagar": 88,
    "Kiran": 70,
    "Anjali": 90,
    "Vikas": 55
    }

    # result = []
    # for key , value in student_marks.items():
    #     if value>80:
    #         result.append(key)

    result = {}
    for key , value in student_marks.items():
        result.setdefault(value>80 , []).append(key)

    result = result.get(True , [])
    print(result)

#6) Convert a nested dictionary of departments and employees into a flat list of (department, employee) pairs.
def Q6():
    departments = {
    "IT": {
        "E001": "Abhay",
        "E002": "Ram"
    },
    "HR": {
        "E003": "Neha",
        "E004": "Priya"
    }
}
    
    result = []
    for dept , employees in departments.items():
        for key , value in employees.items():
            result.append((value , dept))

    print(result)

#7) Write a function that groups a list of tuples like (name, city) into a dictionary of city → names.
def Q7():
    data = [
    ("Amit", "Pune"),
    ("Sneha", "Mumbai"),
    ("Rahul", "Pune"),
    ("Neha", "Delhi"),
    ("Sagar", "Mumbai"),
    ("Pooja", "Delhi"),
    ("Rohit", "Pune")
]
    result = {}

    for key , value in data:
        result.setdefault(value , []).append(key)

    print(result)

#8Given a list of dictionaries, sort them by age using a key function.
def Q8():
    students = [
    {"name": "Amit", "age": 22},
    {"name": "Sneha", "age": 19},
    {"name": "Rahul", "age": 25},
    {"name": "Neha", "age": 20},
    {"name": "Sagar", "age": 23}
    ]

    # students.sort(key = 'age')
    result = {}
    result = sorted(students , key = lambda x : x['age'])
    print(result)

#9)Given a dictionary, delete all entries whose values are None.
def Q9():
    student_data = {
    "Amit": 75,
    "Pooja": None,
    "Rahul": 65,
    "Sneha": None,
    "Neha": 95,
    "Sagar": 88,
    "Kiran": None
    }

    result = {}
    for key , value in student_data.items():
        if value is not None:
            result[key] = value
    print(result)
def main():
    Q9()
if __name__ == "__main__":
    main()