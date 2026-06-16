#Q1 . Create a list of squares from 1–20.

def Q1():
    result = [x**2 for x in range(1,21)]
    print(result)

#Q2)Create a list of cubes of odd numbers.
def Q2():
    result = [num**3 for num in range(1,11) if num%2!=0]
    print(result)

# Extract all vowels from a string.
def Q3():
    str = "Abhay"
    result = [ch for ch in str if ch=='A' or ch=='a' or ch=='E' or ch=='e'or ch=='i' or ch=='I'or ch=='O' or ch=='o'or ch=='U' or ch=='u']
    result = "".join(result)
    print(result)

# Convert all names to uppercase.
def Q4():
    names = ["om","sai","ram"]
    result = [name.upper() for name in names]
    print(result)

# Remove empty strings from a list.
def Q5():
    words = ["om" , "  " , " " , "sai" , "Ram"]
    result = [word for word in words if word.strip()]
    print(result)

# Create a list of even numbers between 1 and 100.
def Q6():
    result = [num for num in range(1,101) if num % 2 == 0]
    print(result)

# Create a list containing lengths of words.
def Q7():
    words = ["apple" , "banana" , "cherry" , "Mango" , "Orange"]
    result = [len(word) for word in words]
    print(result)

# Flatten a nested list.
def Q8():
    matrix = [[1,2,3] , [3,1] , [6,7,8,9]]
    result = [x for submatrix in matrix 
              for x in submatrix]
    print(result)

# Replace negative numbers with 0.
def Q9():
    nums = [13 , -14 , 16 , 18 , -20 , -22]
    result = [0 if num<0 else num for num in nums]
    print(result)

# Create (x, y) coordinate pairs.
def Q10():
    result = [
        (X,Y) 
        for X in range(1,3)
        for  Y in range(1,4)
    ]
    print(result)

    '''
    work like :
    for X in range(1,3):  #generates 1 , 2
        for Y in range(1,4): #generates 1 , 2 , 3
            result.append((X,Y)) [(1, 1), (1, 2), (1, 3), (2, 1), (2, 2), (2, 3)]
    '''

# Create a multiplication table using nested comprehension.
def Q11():
    #only for single value table
    num = 5
    result = [num*5 for num in range(1,11)]
    print(result)

    #generate table from 1 to n
    result = [[i*j for j in range (1,11)] for i in range(1,6) ]
    print(result)

    '''
    result = []

    for i in range(1, 6):
        row = []

        for j in range(1, 11):
            row.append(i * j)

        result.append(row)
    '''

# Extract all digits from a string.
def Q12():
    str = "Abhay2005Jadhav8676"
    result = [ch for ch in str if not ((ch>='A' and ch<='Z') or (ch>='a' and ch<='z'))]
    print("".join(result))

# Remove duplicate values while preserving order (advanced).
def Q13():
    nums = [1,2,3,1,4,3,1,5,2,6]
    seen = []
    result = [num for num in nums if num not in seen and not seen.append(num)]

    #seen.append(num) return NONE after append and not NONE = True
    print(result)

# Create a list of prime numbers from 1–100.
import math
def checkPrime(num):
    isPrime = True
    for i in range(2 , int(math.sqrt(num))+1):
        if num % i == 0:
            isPrime = False
            break
    return isPrime

def Q14():
    result = [num for num in range(1,101) if checkPrime(num)==True]
    print(result)

# Convert temperatures from Celsius to Fahrenheit.
def Fahrenheit_calc(temp):
    return 9/5 * temp + 32
def Q15():
    temp = [27 , 32, 40 ,37,35]
    result = [round(Fahrenheit_calc(num) , 2)  for num in temp]
    print(result)

# Extract names longer than 5 characters.
def Q16():
    names = ["om" ,"Abhay" , "Aditya" , "Pratik" , "Harshal" , "Pooja"]
    result = [name for name in names if len(name)>5]
    print(result)

# Create a matrix transpose using comprehension.
def Q17():
    matrix = [
        [1,2,3 ,11],
        [4,5,6 , 12],
        [7,8,9 , 13]
    ]
    
    # for j in range(len(matrix[0])):
    #     for i in range(len(matrix)):
    #         print(matrix[i][j] , end = "\t")
    #     print()

    result = [[matrix[i][j] for i in range(len(matrix))] for j in range(len(matrix[0]))]

    for row in result:
        print("\t".join(map(str , row)))
    
    print(result)

# Flatten a 3-level nested list.
def Q18():
     nums = [[[1, 2], [3, 4]], [[5, 6], [7, 8]]]
     result = [x for sublist in nums for item in sublist for x in item]
     print(result)

     for list in nums:
         for item in list:
             for x in item:
                 print(x,end=" ")

# Create all possible pairs from two lists.
def Q19():
    nums1 = [1,2,3,4,5]
    nums2 = [6,7,8,9]

    result = [(nums1[x],nums2[y]) for x in range(len(nums1)) for y in range(len(nums2))]
    print(result)

def Q20():
    lst = ["food was good", "food was bad", "food was not good"]
    words = " ".join(lst).split()
    print(words)
    result = [(word , words.count(word)) for word in set(words)]
    print(result)
def main():
    Q20()
if __name__ == "__main__":
    main()